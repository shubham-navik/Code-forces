#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, k, a;
    cin >> n >> k >> a;
    if((n*k) % a != 0){
        cout << "double\n";
    }else{
        if((n*k)/a >2147483647){
            cout << "long long\n";
        }else{
            cout << "int\n";
        }
    }
    return 0;
}