#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    string s[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    string s1;
    cin >> s1;
    ll n;
    cin >> n;
    for (int i = 0; i < 12;i++){
        if(s1==s[i]){
            cout << s[(i + n) % 12];
            break;
        }
    }
}