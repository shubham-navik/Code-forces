#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll Max = INT_MIN;
        ll Min = INT_MAX;
        ll cntmax = 0;
        ll cntmin = 0;
        ll n;
        cin >> n;
        for (int i = 0; i < n;i++){
            ll num;
            cin >> num;

            if(Max==num){
                cntmax++;
            }
            if(Max<num){
                Max = num;
                cntmax = 1;
            }


            if(Min==num){
                cntmin++;
            }
            if(Min>num){
                Min = num;
                cntmin = 1;
            }

        }
        
        if(cntmax==n || cntmin==n){
            cout << n * (n - 1) << endl;
            
        }
        else
        cout << (cntmax) * (cntmin) * 2 << endl;
        
    }
}