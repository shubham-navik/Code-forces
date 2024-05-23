#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v1;
    vector<string> v2;
    int arr[t];
    for (int i = 0; i < t;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < t;i++){
        if(arr[i]%2==0){
            v1.push_back(1);
            v2.push_back("YES");
        }
        else{
            v1.push_back(0);
            v2.push_back("NO");

        }
    }

    for (int i = 0; i < t;i++){
        if(v1[i]==1){
            cout << v2[i] << endl;
            // cout << 1 << " " << 1 << endl;
            for (int j = 0; j < arr[i] / 2;j++){
                cout << 1 << " " << -1 << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}