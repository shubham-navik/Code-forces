#include<bits/stdc++.h>
using namespace std;
#define k 10

int  shubham(char arr[][10],int i,int j){
    if(i-1>-1){
        if(arr[i-1][j]=='W'){

        arr[i-1][j] ='x';
        arr[i][j] = 'x';
        return 1;
        }
    }
 
    if(j-1>-1){
        if(arr[i][j-1]=='W'){

        arr[i][j-1] ='x';
        arr[i][j] ='x';
        return 1;
        }
    }
    if(i+1<3){
        if(arr[i+1][j]=='W'){

        arr[i + 1][j] = 'x';
        arr[i][j] = 'x';
        return 1;
        }
    }
    if(j+1<3){
        if(arr[i][j+1]=='W'){
        arr[i][j + 1] = 'x';
        arr[i][j] = 'x';
        return 1;
        }
    }

    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(arr[i][j]=='P')
           if (shubham(arr, i, j))
               count++;
        }
    }
    cout << count;
}