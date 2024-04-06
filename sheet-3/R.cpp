#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    unordered_map<ll, ll> um;
    int n;
    cin >> n;
    int m = n;
    while(n--){
        ll x;
        cin >> x;
        um[x]++;
    }

    while(m--){
        ll y;
        cin >> y;
        if(um.find(y) != um.end()){
            um[y]--;
            if(um[y] == 0){
                um.erase(y);
            }
        }
    }


    if(um.size() == 0){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
    return 0;
}