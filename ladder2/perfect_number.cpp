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
    vector<ll> v;
    int i = 19;
    v.push_back(i);

    while(v.size()!=n){
        i = i + 9;
            if(shubham(i)){
                v.push_back(i);
            }
      
    }

    cout << v[n-1];
    return 0;
}