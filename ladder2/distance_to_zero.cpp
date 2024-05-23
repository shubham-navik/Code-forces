#include<bits/stdc++.h>
using namespace std;
#define ll long long

int shubham(ll n){

    ll sum = 0;
    while(n>0){
        sum += n % 10;
     
        n =n/10;
    }
    if(sum==10){
        return 1;
    }

    return 0;
}

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    ll l[n],r[n];
    ll max = INT_MAX;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
            max = 0;
            l[i] = 0;
        }
        else{
            if(max>=0 && max<= n+1){

            l[i] = ++max;
            }
            else{
            l[i] = max;
            }
        }
    }
    ll m = INT_MAX;
    for (int i = n-1; i >=0;i--){
        if(a[i]==0){
            m = 0;
            r[i] = 0;
        }
        else{
            if(m>=0 && m<n+1){

            r[i] = ++m;
            }
            else{
            r[i] = m;
            }
        }
    }

    for (int i = 0; i < n;i++){
        cout << min(l[i], r[i])<<" ";
    }
}