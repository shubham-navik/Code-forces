#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++)
            cin >> arr[i][j];
    }

    int visited[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            visited[i][j] = 0;
        }
    }

        int count = 0;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
           if(arr[i][j]=='P' && j!=m-1){

           if(arr[i][j+1]=='W' && visited[i][j+1]==0){
               visited[i][j + 1] = 1;
           }
           if(arr[i+1][j]=='W' && visited[i+1][j]==0){
               visited[i+1][j ] = 1;
           }
           if(arr[i][j-1]=='W' && visited[i][j-1]==0){
               visited[i][j - 1] = 1;
           }
           if(arr[i-1][j]=='W' && visited[i-1][j]==0){
               visited[i-1][j ] = 1;
           }
          

           }
          
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
        //    cout << visited[i][j] << " ";
        if(visited[i][j]==1){
           count++;
        }
        }
        // cout << endl;
    }

        cout << count;
}