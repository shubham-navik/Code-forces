#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    ll x;
    cin >> x;
    int ans = -1;
    for (int i = 0; i < n;i++){
        if(v[i] == x){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}