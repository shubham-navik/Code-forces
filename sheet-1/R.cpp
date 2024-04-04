#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll d;
    cin >> d;
    ll y = d / 365;
    d = d - y * 365;
    ll m = d / 30;
    d = d - m * 30;
    cout << y << " years" << "\n"
         << m << " months" << "\n"
         << d << " days" << endl;
    return 0;
}