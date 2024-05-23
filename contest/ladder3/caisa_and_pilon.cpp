#include<bits/stdc++.h>
using namespace std;


int shubham(int arr[],int n){
    int min = 0;
    int k = 0;
    for (int i = 0; i < n; i++){
        if(k>=arr[i]){
            if(i==0){

            }
            else{
                k = k + arr[i];
                }
        }
        else{
            min++;
            k = min;
            i = -1;
        }
    }

    
    return min;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    cout << shubham(arr, n);
}