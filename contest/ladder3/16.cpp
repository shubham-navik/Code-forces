#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n][n];
    for (int i = 0; i < n;i++){
    for (int j = 0; j < n;j++){
       if(i==j){
           cout << k<<" ";
       }
       else{
           cout << 0 << " ";
       }
    }
    cout << "\n";
    }
}