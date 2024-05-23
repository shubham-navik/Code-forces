#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    map<string, ll> mp;
    string s[10000];
    ll mark[10000];

    for (int i = 0; i < n;i++){
        cin >> s[i] >> mark[i];
        mp[s[i]] += mark[i];
    }
    ll mx = 0;
    for (int i = 0; i < n;i++){
        mx = max(mp[s[i]], mx);
    }

    map<string, ll> mp2;
    string ans;
    for (int i = 0; i < n;i++){
        mp2[s[i]] += mark[i];
        if(mp2[s[i]]>=mx && mp[s[i]]==mx){
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}