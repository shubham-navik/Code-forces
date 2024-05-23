#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, d;
    cin >> n >> d;

    ll arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int k = 1;
    while( k*(k+1)<=2*d){
        k++;
    }

    cout << arr[d-(((k-1)*(k))/2)+1];
}