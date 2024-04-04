#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

        if(b*log(a) > d*log(c)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    return 0;
}