#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
    }
   else{
        for (int i = n - 1; i >= 1;i--){
            if(n%i!=0 && n-i>0){
                n = n - i;
            }
            else{
                break;
            }
        }
        cout << n << endl;
   }
}