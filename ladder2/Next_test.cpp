#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    sort(arr, arr + n);
    if(n==1){
        if(arr[0]>1){
            cout << 1;
            return 0;
        }
        else{
            cout << arr[0] + 1;
            return 0;
        }
    }
    else{
        if(arr[0]>1){
            cout << 1;
            return 0;
        }
        else{
                for (int i = 0; i < n;i++){
                if(arr[i+1]-arr[i]==1){
                    continue;
                }
                else{
                    cout << arr[i] + 1;
                    return 0;
                }

                cout << arr[n-1] + 1;
                return 0;
              }
         }
    }
}