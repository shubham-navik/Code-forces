#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;
        ll x = a ^ b;
        if(n%3==0){
            cout << a << endl;
        }
        else if(n%3==1){
            cout << b << endl;
        }
        else{
            cout << x << endl;
        }
         
    }
   
}