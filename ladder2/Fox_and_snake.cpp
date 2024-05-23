#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n>>m;
    char arr[n][m];
    int k = 0;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            arr[i][j] = '.';
        }
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(i%2==0){
                arr[i][j] = '#';
         
            }
         
        }
    }
    for (int i = 0; i < n;i++){
        if(i%2!=0){
            arr[i][m-1] = '#';
            i+=3;
        }
    
    }
    for (int i = 3; i < n;i++){
        if(i%2!=0){
            arr[i][0] = '#';
            i+=3;
        }
    
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}