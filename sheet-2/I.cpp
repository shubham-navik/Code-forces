#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll rev(ll n){
    ll x = 0;
    while(n>0){
        x = x * 10 + n % 10;
        n = n / 10;
    }
    return x;
}

int main(){
    ll n;
    cin >> n;

    ll reverse = rev(n);
    if(reverse == n){
        cout << reverse << "\nYES\n";
    }else{
        cout << reverse << "\nYES\n";
    }
    return 0;
}