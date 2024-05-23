#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, s;
    cin >> n >> s;
    if(s%n==0){
        cout<<s / n << endl;
    }
    else{
        cout << s / n + 1 << endl ;
    }
}
