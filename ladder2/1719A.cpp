#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
       if((n+m)%2!=0){
           cout << "Burenka\n";
       }
       else{
           cout << "Tonya\n";
       }
    }
    return 0;
}