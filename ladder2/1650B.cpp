#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll l, r, a;
        cin >> l >> r >> a;
        // ll x;
        if(l/a!=(r+1)/a)
             r = 1ll *a* ((r + 1) / a )-1;
        cout << r / a + r % a << endl;
    }
}