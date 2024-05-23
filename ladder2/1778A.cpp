#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum = 0;
        ll a[n];
        ll flag = 0;
        ll count = 0;
        for (int i = 0; i < n;i++){
            cin >> a[i];
            sum += a[i];
            if (a[i]<0){
                count++;
            }

        }

        for (int i = 0; i < n - 1;i++){
            if(a[i]<0 && a[i+1]<0){
                flag = 1;
            }

            
        }

        if(flag){
            cout << sum + 4 << endl;
        }
        else{
            if(count==0){
                cout << sum - 4 << endl;
                
            }
            else{
                cout << sum << endl;
            }
        }
    }
    return 0;
}