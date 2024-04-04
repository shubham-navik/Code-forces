#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        if(a+b == c){
            cout << "Yes" << endl;
        }else{
            cout << a + b << endl;
        }
    }
    else if(s == '-'){
        if(a-b == c){
            cout << "Yes" << endl;
        }else{
            cout << a - b << endl;
        }
    }
    if(s == '*'){
        if(a*b == c){
            cout << "Yes" << endl;
        }else{
            cout << a * b << endl;
        }
    }

    return 0;
}