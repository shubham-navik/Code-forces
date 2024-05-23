#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        if(m<=k){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}