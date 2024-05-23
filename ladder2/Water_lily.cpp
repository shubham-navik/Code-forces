#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b;
    cin >> a >> b;
    // setprecision(10);
    cout << setprecision(10)<<(b * b - a * a) / (2.0 * a);
}