#include<bits/stdc++.h>
using namespace std;
#define ll long long

int shubham(ll n){
    if(n==0 || n==1){
        return 0;
    }

    else{
        for (int i = 2; i  <=sqrt(n);i++){
            if(n%i==0)
                return 0;
        }
    }

    return 1;
}

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll a,b;
        cin >> a >> b;

        if((abs(a-b)==1 && shubham(a+b))){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

  
}