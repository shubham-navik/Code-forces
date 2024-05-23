#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b;
    cin >> a >> b;
    ll k = a;
    ll cnt = 0;
    while(a>=b){
        cnt = cnt + a / b;
        ll rem = a % b;
        a = a / b+rem;
    }
    cout << cnt+k;
}