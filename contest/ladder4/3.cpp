#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n;i++)
        cin >> A[i];

        int sum[n];
    for (int i = 0; i < n;i++)
        sum[i] = 0;

        

    int B[n][100];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < 100;j++){
            B[i][j] = 0;
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < A[i];j++){
            cin>>B[i][j];
        }
    }

      for (int i = 0; i < n;i++){
        for (int j = 0; j < 100;j++){
            sum[i] = sum[i] + (B[i][j]);
        }
        sum[i] =(sum[i]*5)+ A[i]*15;
    }

    // for (int i = 0; i < n;i++)
    //     cout << sum[i] << " ";
    sort(sum, sum + n);
    cout << sum[0];
}