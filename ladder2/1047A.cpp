#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     ll n;
     cin >> n;
     if(n%3==0 ){
         cout << 1 << " " << 1 << " " << n - 2 << endl;
     }
    else{
         cout << 1 << " " << 2<<" " << n - 3 << endl;
    }
     return 0;
}