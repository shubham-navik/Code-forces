#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if((a<b+c && b<a+c && c<a+b) || (a<b+d && b<a+d && d<a+b) || (a<c+d && c<a+d && d<a+c) || (b<c+d && c<b+d && d<c+b))
        cout << "TRIANGLE" << endl;
   else if((a==b+c || b==a+c || c==a+b) || (a==b+d || b==a+d || d==a+b) || (a==c+d || c==a+d || d==a+c) || (b==c+d || c==b+d || d==c+b))
        cout << "SEGMENT" << endl;
        else
        cout << "IMPOSSIBLE" << endl;
}