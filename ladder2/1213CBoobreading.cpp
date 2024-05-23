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
        ll n, m;
        cin >> n >> m;
        cout<<((((m-1)*m))/2)*n/m
    }
}