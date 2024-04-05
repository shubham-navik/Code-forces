#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        ll sum = 0;
        if(a > b){
            swap(a, b);
        }
        for (int i = a + 1; i < b;i++){
            if(i%2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}