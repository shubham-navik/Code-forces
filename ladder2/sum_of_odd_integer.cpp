#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n%2== k%2){
            if(k*k<=n)
                cout << "YES" << endl;
                else{
                cout << "NO" << endl;
                }
        }
        else{
                cout << "NO" << endl;
        }
    }
}