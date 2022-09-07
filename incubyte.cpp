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
                sum += num;
                start = i+1;
            }
            i++;
        }
        
        int num = stoi(numbers.substr(start, n-start));
        sum += num;
        
        return sum;
    }
};

int main() {
    StringCalculator sc;
    
    cout<<"Enter numbers seperated by ','\n";
    string numbers;
    cin>> numbers;
    
    int ans = sc.add(numbers);
   
    cout<<ans<<endl;

    return 0;
}