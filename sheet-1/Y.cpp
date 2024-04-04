#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = (a%100 * b%100 * c%100 * d%100) % 100 ;
    if(x < 10)
        cout << "0"<<x << endl;
        else{
            cout << x << endl;
        }
    return 0;
}