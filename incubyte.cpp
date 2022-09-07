#include<bits/stdc++.h>

using namespace std;

class StringCalculator {
public:
    int add(string numbers) {
        if(numbers.size() == 0)  
            return 0;
        
        int n = numbers.size();

        int sum = 0;
        int start = 0;
        int i = 0;
        string sub = "";
        vector<int> negatives;
        // to check for alphabet values
        while(i< n) {
            if(numbers[i] >= 'a' && numbers[i] <= 'z') {
                // numbers[i] = numbers[i] - 'a' + 49;
                sub += to_string(numbers[i] - 'a' + 1);
            }
            else 
                sub += numbers[i];
            i++;
        }

        // to add the numbers in the input
        i=0;
        n = sub.size();
        numbers = sub;
        while(i < n) {
            if(numbers[i] == ',') {
                int num = stoi(numbers.substr(start, i-start));
                // numbers above 1000 are ignored, 1000 is valid, 1001+.. is not
                if(num<=1000)
                    sum += num;
                if(num<0)
                {
                    negatives.push_back(num);
                }
                start = i+1;
            }
            i++;
        }

        // handling negatives
        int num = stoi(numbers.substr(start, n-start));
        if(num<0) {
            negatives.push_back(num);
        }

        if(negatives.size()>0) {
            string e = "Negatives not allowed ";
            
            for(int i=0;i<negatives.size();i++) {
                e += to_string(negatives[i]);
                e += " ";
            }
            
            throw std::invalid_argument(e);
        }

        if(num<=1000)
            sum += num;
        
        return sum;
    }
};

int main() {
    StringCalculator sc;
    
    cout<<"Enter numbers seperated by ','\n";
    string numbers;
    // if want to include \n as well, then setting delimiter to ' '
    // getline(cin, numbers, ' ');
    // else by default \n
    cin>>numbers;
    int ans;
    try {
        ans = sc.add(numbers);
    }
    catch(invalid_argument& e) {
        cout<<e.what()<<endl;
        return 0;
    }

    cout<<ans<<endl;

    return 0;
}