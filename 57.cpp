#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m;i++){
        cin >> arr[i];
    }

    int flag = 0;
    sort(arr, arr + m);
    for (int i = 0; i < m-1;i++){
        if(arr[i]==arr[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << 0;
    }
      else{  cout << arr[n - 1] - arr[0];
      }
}