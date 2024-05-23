#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    ll n;
    cin >> n;
    int x = __builtin_popcountll(n);
    if(x == 1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}