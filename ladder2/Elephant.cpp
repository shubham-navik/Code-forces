#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f1(ll x){
    return x / 1;
}
ll f2(ll x){
    if(x%2==0){
        return x / 2;
    }
    else
        return x / 2 + 1;
}
ll f3(ll x){
    if(x%3==0){
        return x / 3;
    }
    else
        return x / 3 + 1;
}
ll f4(ll x){
    if(x%4==0){
        return x / 4;
    }
    else
        return x / 4 + 1;
}
ll f5(ll x){
    if(x%5==0){
        return x / 5;
    }
    else
        return x / 5 + 1;
}




int main(){
    ll x;
    cin >> x;

    cout << min(f1(x), min(f2(x), min(f3(x), min(f4(x), f5(x)))));
}