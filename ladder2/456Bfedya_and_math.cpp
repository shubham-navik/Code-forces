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

   string n;
    cin >> n;
    ll a2[4] = {6, 2, 4, 8};
    ll a3[4] = {1, 3, 9, 7};
    ll a4[4] = {6, 4, 6, 4};
    ll sum = 0;
    for (int i = 0; i < n.length();i++){
        sum += n[i] - '0';
    }
     

}