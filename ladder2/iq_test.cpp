#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    ll even_pos = 1;
    ll oddd_pos = 1;
    ll count_even = 0;
    ll count_oddd = 0;

    ll a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            count_even++;
            even_pos = i;
        }
        else{
            oddd_pos = i;
            count_oddd++;
        }
    }

    if(count_even<count_oddd){
        cout << even_pos+1 << endl;
    }
    else{
        cout << oddd_pos+1 << endl;
    }
}