#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll a, b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << "NO\n";
    }else{
        if(abs(a-b) <= 1 )
            cout << "YES\n";
            else
                cout << "NO\n";
    }
    return 0;
}