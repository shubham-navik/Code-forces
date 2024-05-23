#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char arr[n][n];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){

            arr[i][j] = '.';
        }
    }

    int count = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(i%2==0){
                if(j%2==0){
                    arr[i][j] = 'C';
                    count++;
                }
            }
            else{
                if(j%2!=0){
                    arr[i][j] = 'C';
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}