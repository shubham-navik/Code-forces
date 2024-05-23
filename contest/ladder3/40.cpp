#include<bits/stdc++.h>
using namespace std;


int digitalSum(long long int num){
    int sum = 0;
    while(num>0){
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}


int main(){
    string s;
    cin >> s;
    int count = 0;
    long long int num=0;
        if(s.length()>=2){
        for (int i = 0; i < s.length();i++){
            num =num+ (s[i] - '0');
        }
      

         count++;
         }
        long long int x = num;
        while (x>=10){
            count++;
            x = digitalSum(x);
    }

    cout << count;
}