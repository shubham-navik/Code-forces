#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll max = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(max<a[i]){
            max = a[i];
        }

    }

    for (int i = 0; i < n;i++){
        sum = sum + max - a[i];
    }

    cout << sum<<endl;
}