#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
        return 0;
}