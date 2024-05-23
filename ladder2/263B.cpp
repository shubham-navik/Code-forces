#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    if(k>n){
        cout << -1 << endl;
    }
    else{
        
        cout << a[n - k] << " " << 0 << endl;
    }
    return 0;
}