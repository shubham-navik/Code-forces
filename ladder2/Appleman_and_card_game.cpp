#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll arr[26];
    fill( arr,arr+26, 0);
    for (int i = 0; i < s.length();i++){

        arr[s[i] -65]++;
    }

    sort(arr,arr+26,greater<int>());
    ll sum = 0;
    int i = 0;
    while(k>0){
        if(k<arr[i]){
            sum +=k *k;
            k = 0;
        }
        else{

        sum += arr[i] * arr[i];
        k = k - arr[i];
        i++;
        }
    }

    cout << sum;
}