#include<bits/stdc++.h>
using namespace std;


int shubham(int arr[][30],int a,int b,int n){

    int row_sum = 0;
    int col_sum = 0;
    for (int i = 0; i < n;i++){
      row_sum+=  arr[a][i];
    }
    for (int i = 0; i < n;i++){
      col_sum+=  arr[i][b];
    }

   
   if(col_sum>row_sum){
      return 1;
   }
   return 0;
}


int main(){
    int arr[30][30];
    int n;
    cin >>n ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++){
          if(shubham(arr,i,j,n)){
              count++;
          }
        }
    }
    // count++;
    cout << count;
}