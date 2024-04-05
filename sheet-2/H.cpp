#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    bool flag = false;
    for (int i = 2; i < n / 2;i++){
        if(n% i == 0){
            flag = true;
        }
    }
    if(flag){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
        return 0;
}