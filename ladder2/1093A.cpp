#include<bits/stdc++.h>
using namespace std;
#define ll int

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%7==0){
            cout << n / 7 << endl;
        }
        else{
            {
                cout << n / 7 + 1<<endl;
            }
        }
    }
  
}