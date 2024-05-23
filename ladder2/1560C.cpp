#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     ll t;
     cin>>t;
     while(t--){
         ll n;
         cin >> n;

         ll x = sqrt(n);

         if(n-x*x>0){
            if(n-x*x<x+1){
                cout <<  n - x * x << " " <<x + 1 << endl;
            }
            else{
                cout << x + 1 << " " << 2 * x + 1 - (n - x * x) + 1 << endl;
            }
         }
         else
         {
            cout << x << " 1" << endl;
         }
     }
    return 0;
}