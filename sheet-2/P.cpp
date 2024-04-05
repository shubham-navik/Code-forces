#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;

    for (int i = n; i >= 1;i--){
        string s(i, '*');
        cout << s << endl;
    }
        return 0;
}