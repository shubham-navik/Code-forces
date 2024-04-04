#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> v = {a, b, c};
    vector<ll> x = v;
    sort(v.begin(), v.end());
    for(auto p : v){
        cout << p << endl;
    }
    cout << endl;
    for(auto p : x){
        cout << p << endl;
    }

    return 0;
}