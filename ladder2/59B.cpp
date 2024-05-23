#include<bits/stdc++.h>
using namespace std;
#define ll long long
        

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    // while(n--){
    //     ll a;
    //     cin >> a;
    //     sum += a;
    // }
    ll count = 0;
    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum += a[i];
        if(a[i]%2!=0){
            count++;
        }

    }

    if(sum%2!=0){
        cout << sum << endl;
    }
    else{
        ll x;
        sort(a, a + n);
        for (int i = 0; i < n;i++){
            if(a[i]%2!=0){
                x = a[i];
                break;
            }
            else{
                continue;
            }
        }
        if(count>0)
        cout << sum - x << endl;
        else{
        cout << 0 << endl;
        }
    }

        return 0;
}