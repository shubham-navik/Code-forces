#include<bits/stdc++.h>
using namespace std;
#define ll long long

int shubham(ll n){

    ll sum = 0;
    while(n>0){
        sum += n % 10;
     
        n =n/10;
    }
    if(sum==10){
        return 1;
    }

    return 0;
}

int main(){

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        if((n+1)%4==0){
            cout << n*1 + 1 << endl;
        }
        else if((n+1)%2==0){
            cout << n * 2 + 1 << endl;
        }
        else{
            cout << n * 4 + 1 << endl;
        }
    }
}