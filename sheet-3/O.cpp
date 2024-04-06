#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";

// int solve(int n ,vector<ll> &v){
//     if(n == 1)
//         return 0;
//     if(n == 2)
//         return 1;

//     if(v[n] != -1)
//         return v[n];

//     v[n] = solve(n - 1) + solve(n - 2);

//     return v[n];
// }
vector<ll> ans(60, 0);
void solve(){
    ll n;
    cin >> n;
    cout << ans[n-1] << endl;
}

int main(){
    // int n;
    // cin >> n;
    // vector<ll> v(n+1,-1) ;
    ans[0] = 0;
    ans[1] = 1;
    for (ll i = 2; i <= 59;i++){
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    // for (int i = 1; i < ans.size();i++)
    //     cout << ans[i] << " ";
    // cout << '\n';
    solve();
    // cout << solve(n,v);
    return 0;
    // 0 1 1 2 3 5 8 13 21 
}