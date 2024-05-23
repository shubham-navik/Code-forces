#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int t;
    cin >> t;
    unordered_map<ll, ll> mp;
    while(t--){
        ll n, c, d;
        cin >> n >> c >> d;
        ll x = n*n;
        ll m = INT_MAX;
        while(x--){
            ll a;
            cin >> a;
            m = min(m, a);
            // cout << m <<" "<<a <<endl;
            mp[a]++;
        }
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            ll y = m;
            for (int j = 1; j <= n; j++) {
                if (mp.find(y) != mp.end()) {
                    mp[y]--;
                    if (mp[y] == 0) {
                        mp.erase(y); 
                    }
                } else {
                    flag = true;
                    break;
                }
                y += c; 
            }
            if (flag) {
                break;
            }
            m = m + d; 
        }
        if (flag) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
        mp.clear();
    }
    return 0;
}
