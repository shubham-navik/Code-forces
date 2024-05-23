#include<bits/stdc++.h>
using namespace std;
#define ll int

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll k = 0;
    ll i = 0;
    while(i<n){
        cout << s[i];
        i = i + ++k;
    }
}