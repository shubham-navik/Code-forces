#include<bits/stdc++.h>
using namespace std;


int shubham(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main(){

    long long int l;
    cin >> l;
 
 if(l%4==0){
        int a = l / 4;
        for (int i = 0; i < a;i++){
            cout << 4;
        }
        return 0;
 }
 if(l%7 ==0){
        int a = l / 7 ;
        for (int i = 0; i < a;i++){
            cout << 7 ;
        }
        return 0;
 }

   
}