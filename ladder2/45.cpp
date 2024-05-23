#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string one_digit[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // cout << one_digit[5];
    string two_dig[11] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    string vella[8] = {"twenty","thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if(n<=9){
        cout << one_digit[n];
        return 0;
    }
    else if(n>=10 && n<=20){
        cout << two_dig[n - 10];
        return 0;
    }
    else{
        if(n%10==0){
            cout << vella[(n / 10) - 3];
            return 0;
        }
        cout << vella[(n / 10)-2] << "-" << one_digit[n % 10];
    }
}