#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = a;
    if(b<0 and a>0 and c>0){
        cout<<"NO"<<endl;
        exit(0);
    }
    while(sum<b){
        sum += c;
        if(sum==b){
            break;
        }
    }
    if (sum==b)
        yes;
     else
        no;
    return 0;
}