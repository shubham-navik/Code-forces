#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";

bool found(vector<ll> &v, ll x){
    int l = 0;
    int r = v.size() - 1;

    while (l <= r) {
        int mid = (l + r) / 2; 
        if (v[mid] == x)
            return true;
        if (v[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}

int main(){
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i]; 
    }
    sort(v.begin(), v.end());

    while(q--){
        ll x;
        cin >> x;
        if(found(v,x)){
            cout << "found\n";
        }else{
            cout << "not found" << endl;
        }
    }
    return 0;
}