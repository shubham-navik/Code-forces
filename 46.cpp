// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    int sum = 0;
    sort(arr, arr + n);
    for (int i = 0; i < m;i++){
        // sum += arr[i];
        if(arr[i]<0){
            sum = sum + (-arr[i]);
        }
      
    }

    cout << sum;
}