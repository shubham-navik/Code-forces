#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;

        ll count = 0;
        while(a!=b ){
            a = floor(a / b);
            if(b==1){
                count++;
                b++;
            }
           
            count++;
        }

        cout << count+2 << endl;
    }
}