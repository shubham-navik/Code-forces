#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){

        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        v.push_back(arr[1]);
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}