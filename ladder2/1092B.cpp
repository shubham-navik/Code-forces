#include<bits/stdc++.h>
using namespace std;
#define ll int

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a + n);
    // for (int i = 0; i < n;i++){
    //     cout << a[i]<<" ";
    // }
    ll sum = 0;
    for (int i = 0; i < n - 1;i+=2){
        sum += a[i + 1] - a[i];
    }
    cout << sum << endl;
}