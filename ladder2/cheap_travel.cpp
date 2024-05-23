#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if(n%m==0){
        cout << min(n / m * b, n * a);
    }
    else{
        ll rem = n % m;
        if(rem*a>b){
            cout << min(n * a, n / m * b + b);
        }
        else{
            cout << min(n * a, n / m * b + rem * a);
        }
    }
}

