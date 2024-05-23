#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        set<ll> s;
        ll x;
        for (int i = 0; i < n;i++){
            cin >> x;
            s.insert(x);
        }
        ll p = s.size();
        if((n-p)%2==0){
            cout << p << endl;
        }
        else{
            cout << p - 1 << endl;
        }
    }
    return 0;
}