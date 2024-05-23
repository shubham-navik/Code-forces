#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;
    ll x = n / k;
    if(x&1){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}