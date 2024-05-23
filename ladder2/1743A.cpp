#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }

        cout << ((10 - n) * (9 - n) / 2) * 6 << endl;
    }
}