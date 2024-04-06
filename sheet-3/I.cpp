#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(vector<ll> v){
    int n = v.size();

    ll ans = INT_MAX;
    for (int i = 0; i < n - 1;i++){
        for (int j = i + 1; j < n;j++){
            ans = min(ans, (v[i] + v[j] + j - i));
        }
    }

    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }

        cout << solve(v) << endl;
    }
    return 0;
}