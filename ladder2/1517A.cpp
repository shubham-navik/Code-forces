#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll shubham(ll n){
    ll sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2050!=0){
            cout << -1 << endl;
        }
        else{
            cout << shubham(n / 2050) << endl;
        }
    }
    return 0;
}