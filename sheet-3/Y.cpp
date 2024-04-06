#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        sum += v[i];
        v[i] = sum;
    }


    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == r){
            cout << v[l - 1] << endl;
        }
        else if(l == 1){
            cout << v[r - 1] << endl;
        }else
        cout << v[r-1] - v[l-2]  << endl;
    }
        return 0;
}