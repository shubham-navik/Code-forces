#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(1);
    ll i = 0;
    while(i!=500){
        v.push_back(v[i]*10);
        v.push_back(v[i]*10+1);
        i++;
        }
        ll count = 0;
        for (int j = 0; j < v.size();j++){
        // cout << v[j] << " ";
        if(n>=v[j]){
            count++;
        }
        else{
            break;
        }
        }
        cout << count << "\n";
        return 0;
}