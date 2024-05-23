#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n][2 * m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 2 * m;j++){
            cin >> arr[i][j];
        }
    }

    int count = 0;

      for (int i = 0; i < n;i++){
        for (int j = 0; j <  m;j++){
          if(arr[i][2*j]==1 || arr[i][2*j+1]==1)
              count++;
        }
    }
    cout << count;
}