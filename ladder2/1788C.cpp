#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2==0){
            cout << "N0\n";
        }
        else{
            cout << "Yes\n";
            ll count = 2 * n;
            for (int i = 1; i <= n;i++){
                // cout << i << " " << 2 * n - i << endl;
                if(i%2!=0){
                    cout << i << " " << count << endl;
                }
                else{
                    cout << i << " " << count - 2 << endl;
                    count--;
                }
            }
        }
    }
    return 0;
}