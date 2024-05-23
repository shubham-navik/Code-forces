#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    string s;
    cin >> s;
    string c = "><+-.,[]";
    ll a = 0;
    for (int i = 0; i < s.length();i++){
        for (int j = 0; j<8;j++){
            if(c[j]==s[i])
            a = (a*16 + 8 + j) % 1000003;
        }
    }
    cout << a << "\n";
    return 0;
}