#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll count = 0;
        ll a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
            if(a[i]%2==0){
                count++;
            }
        }

        cout << min(count, n - count) << endl;
    }
    return 0;
}