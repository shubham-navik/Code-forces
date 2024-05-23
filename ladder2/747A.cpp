#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n;
    cin >> n;

    for (int i = sqrt(n); i >= 1;i--){
        if(n%i==0){
             cout<< i << " " << n / i;
             return 0;
        }
    }
}