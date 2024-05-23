#include<bits/stdc++.h>
#define ll long long
using namespace std;


int findmin(ll n){
    ll a=0, b=0;

    while(n>0){
         if(n%7==0){
            n -= 7;
            b++;
        }
       else if(n%4==0){
            n -= 4;
            a++;
        }
        else{
            n -= 4;
            a++;
        }
    }


    if(n<0){
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < a;i++)
        cout << 4;

    for (int i = 0; i < b;i++)
        cout << 7;

    return 0;
}


int main(){

    ll n;
    cin >> n;

    findmin(n);
}