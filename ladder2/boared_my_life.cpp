#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b;
    cin >> a >> b;
    ll x = min(a, b),k=1;
    while(x>0){
        k = k * x;
        x--;
    }
    cout << k;
}