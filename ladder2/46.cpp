#include<bits/stdc++.h>
using namespace std;


long long int f(long long int n){
    if(n%2==0){
        return n / 2;
    }
    else{
        return (n - 1) / 2 - n;
    }
}

int main(){
   long long int n;
    cin >> n;
    cout << f(n);
}