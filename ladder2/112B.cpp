#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    if((x==n/2 || x==n/2+1) && (y==n/2 || y==n/2+1))
        cout << "NO\n";
        else{
        cout << "YES\n";
        }
    return 0;
}