#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll l, r, d;
        cin >> l >> r >> d;
        if(l>d  || r<d){
            cout << d << endl;
        }
        else{
            ll x = r % d;
            cout << r + d - x<<endl;
        }
    }
}