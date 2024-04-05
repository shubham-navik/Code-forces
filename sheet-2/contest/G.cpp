#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    if(n == 0 || k == 0){
        cout << 0 << endl;
    }
    else if(n == 0  && m == 0 && k == 0){
        cout << 0 << endl;
    }else if(n > 0 && m == 0 && k > 0){
        cout << min(n/2, k) << endl;
    }
    else if( m < n && m <k){
        int x = m;
        n = n - m;
        k = k - m;
        cout << x + min(n / 2, k) << endl;
    }else{
        cout << min(n, min(m, k)) << end;
    }
    return 0;
}