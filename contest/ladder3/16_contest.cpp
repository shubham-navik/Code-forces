#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int k = max(3 * a / 10, a - (a / 250)* c);
    int q = max(3 * b / 10, b - (b / 250) * d);
    if(k>q){
        cout << "Misha";
    }
    if(k<q){
        cout << "Vasya";
    }
    if(k==q){
        cout << "Tie";
    }
}