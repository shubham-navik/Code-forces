#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<ll> v;

    while(t--){
        int n,k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];

        sort(arr, arr + n, greater<ll>());

        ll sum = 0;
        for (int j = 0; j < k;j++){
            sum += arr[j];
        }
        v.push_back(sum);
    }

    for (int x = 0; x < v.size();x++)
    {
        cout << v[x] << endl;
    }
}