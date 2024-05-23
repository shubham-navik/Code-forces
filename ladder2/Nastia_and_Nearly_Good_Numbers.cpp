#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(b==1){
            cout << "NO" << endl;
        }
        else{
            ll sum = a * b * 2;
            ll y = sum - a;
            cout << "YES" << endl;
            cout << a << " " << y << " " << sum << endl;
        }
            }


            
}