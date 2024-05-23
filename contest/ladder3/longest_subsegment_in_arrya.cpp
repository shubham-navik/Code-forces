#include<bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin >> n;
   long long int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    // cout << shubham(arr, n);
     int max = 1, len = 1;

    for (int i = 1; i < n;i++){
        if(arr[i]>=arr[i-1]){
            len++;
        }
        else{
          
          if(max<len){
              max = len;
              len = 1;

          }
        }
    }

    if(max<len){
        max = len;
    }
    // return max;
    cout << max;
}