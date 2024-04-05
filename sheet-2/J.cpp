#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(ll n){
    for (int i = 2; i <= n / 2;i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    for (int i = 2; i <= n;i++){
        if(solve(i))
            cout << i << " ";
    }
        return 0;
}