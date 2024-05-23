#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll count = 0;
    for (int i = n-1; i>0; i--){
        if(a[i-1]<a[i]){
            count++;
        }
        else{
            break;
        }
    }
    cout <<n-1- count << endl;
    return 0;
}