#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    for (int i = a; i >= 0;i--){
        if(b>=2*i && c>=4*i){
            cout << i * 7;
            return 0;
        }
    }
    
}