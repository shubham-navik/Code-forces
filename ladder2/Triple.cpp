#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int n;
        cin >> n;
        int arr[n ];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int b[n + 1];
        fill(b, b + n + 1, 0);
        int flag = 0;
        for (int i = 0; i < n;i++){
            b[arr[i]]++;
            if(b[arr[i]]==3){
                flag = 1;
                v.push_back(arr[i]);
                break;
            }
        }
            if(flag==0){
                v.push_back(-1);
            }
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}