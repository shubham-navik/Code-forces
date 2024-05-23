#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define y "yes"
#define n "NO"


int main(){
    ll a, b;
    cin >> a >> b;

    if(a==9&& b==1){
        cout << 9 << " " << 10;
        return 0;
    }
    if(abs(a-b)>1){
        cout << -1 << endl;
    }
    else if( abs(a-b)==1){
        if(a>b){
            cout << -1 << endl;
        }
        else{
            cout << a * 10 +9 << " " << b * 10 << endl;
        }
    }
    else{
            cout << a * 10 << " " << b * 10 +1<< endl;

    }
}
