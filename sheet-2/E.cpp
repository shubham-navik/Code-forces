#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     ll n;
     cin >> n;
     ll ans = INT_MIN;
     while(n--){
         ll x;
         cin >> x;
         ans = max(ans, x);
     }
     cout << ans << endl;
     return 0;
}