#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum_a = 0;
        ll sum_b = 0;
        ll i = 1;
        bool f = 0;
        while(n<0){
            if(i<n && n>0 && f==0){
                sum_a += i;
                n = n - i;
                i = i + 4;
                f = 1;
            }
            else{
                if(i<n&& n>0)
            }

        }
    }
    return 0;
}