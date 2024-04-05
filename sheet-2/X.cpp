#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
       
        int cnt = __builtin_popcount(n);
        
        cout << (ll)pow(2, cnt) - 1<<endl;
    }
    return 0;
}