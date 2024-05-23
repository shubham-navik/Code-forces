#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        ll count = 0;
        while(a>0 && b>0){
            if(a>b){
                ll m = a / b;
                count = count + m;
                a = a - (m) * b;
            }
            else{
                ll n = b / a;
                count = count + n;
                b = b - (n) * a;
            }
        }
        cout << count << endl;
    }
    return 0;
}