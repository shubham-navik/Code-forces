#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        ll k = 0;
        for (int i = 0; i < n ;i++){
            while(a[i]%2==0){
                k++;
                a[i] = a[i] / 2;
            }
        }
        sort(a, a + n);
        a[n - 1] = a[n - 1] * pow(2, k);
        ll sum = 0;
        for (int i = 0; i < n;i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}