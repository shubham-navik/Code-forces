#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;

    int b[n];


    for (int i = 0; i < n;i++){
       b[i]=0;
    }
    int arr[m];
    for (int i = 0; i < m;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < m;i++){
        for (int j = arr[i]-1; j < n;j++){
            if(b[j]==0){
                b[j] = arr[i];
            }
        }
    }

   for (int i = 0; i < n;i++){
        cout<< b[i]<<" ";
    }

}