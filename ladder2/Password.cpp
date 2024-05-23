#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    vector< long long int> v1;
    v.push_back(1);
    for (int i = 1; i <= 9;i++){
        v.push_back(i * v[i - 1]);
    }

    // for (int i = 0; i < v.size();i++){
    //     cout << v[i] << " ";
    // }

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        if(10-n>=4){
            v1.push_back((10-n)*v[4] );
        }
        if(10-n==3){
            v1.push_back(v[4] / v[2]);
        }
        if(10-n==2){
            v1.push_back(v[4] / (v[2] * v[2]));
        }
        

    }

    for (int i = 0; i < v1.size();i++){
        cout << v1[i] << endl;
    }
}