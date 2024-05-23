#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    
    ll v[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
  
    cout << v[n / 10] * v[n % 10];
    return 0;
  
}