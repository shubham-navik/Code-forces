#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int solve(ll x){
    int cnt = 0;
    while(x%2 == 0){
        cnt++;
        x /= 2;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int ans = INT_MAX;
    while(n--){
        ll x;
        cin >> x;
        ans = min(ans, solve(x));
    }
    cout << ans << endl;
    return 0;
}