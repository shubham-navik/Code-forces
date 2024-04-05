#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll a){
    while(a>0){
        cout << a % 10 << " ";
        a /= 10;
    }
    cout << endl;
}

int main(){
    ll n;
    cin >> n;
    while(n--){
        ll a;
        cin >> a;
        if(a == 0){
            cout << a << endl;
        }else
        solve(a);
    }
    return 0;
}