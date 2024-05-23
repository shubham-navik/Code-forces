#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[100][100];
    int a[t];
    int flag[t];

    for (int i = 0; i < t;i++){
        int n;
        a[i] = n;
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < t;i++){
        sort(arr[i], arr[i] + a[i]);

        for (int j = 0; j < a[i]-1;j++){
            if(arr[i][j]==arr[i][j+1]){
                flag[i] = 1;
                break;
            }
            else{
                flag[i] = 0;
            }
        }
    }

    for (int i = 0; i < t;i++){
        if(flag[i]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}