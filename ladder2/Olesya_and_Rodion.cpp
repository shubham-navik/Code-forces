#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n>>t;
    string s;
    if(t==2){
        for (int i = 0; i < n;i++)
            cout << 2;
        return 0;
    }
    
    
    if(t==3 || t==9){
        for (int i = 0; i < n;i++){
            cout << 9;
        }
            return 0;
    }
    if(t==4){
            for (int i = 0; i < n;i++)
            cout << 4;

            return 0;
    }

    if(t==5){
        for (int i = 0; i < n;i++)
            cout << 5;

        return 0;
    }
    if(t==6){
        for (int i = 0; i < n;i++){
            cout << 6;
        }
        return 0;
    }

    if(t==7){
        for (int i = 0; i < n;i++){
            cout << 7;
        }
        return 0;
    }
    if(t==8){
        for (int i = 0; i < n;i++){
            cout << 8;
        }
    }

    if(t==10){
        if(n==1){
            cout << -1;
            return 0;
        }
        else{
            cout << 1;
            for (int i = 0; i < n - 1;i++){
                cout << 0;
            }
            return 0;
        }
    }
    
}
