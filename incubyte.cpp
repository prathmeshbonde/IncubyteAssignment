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

        while(i < n) {
            if(numbers[i] == ',') {
                int num = stoi(numbers.substr(start, i-start));
                sum += num;
                start = i+1;
            }
            i++;
        }

        // handling negatives
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