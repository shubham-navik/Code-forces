#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<long long int> v;
    while(t--){
    long long int sum = 0;
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n);
        v.push_back(sum - arr[0] * n);
        
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}