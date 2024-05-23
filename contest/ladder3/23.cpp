#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n;i++)
        cin >> s[i];

    int a[6]={0,0,0,0,0,0};

    for (int i = 0; i < n;i++){
        a[s[i] - '0']++;
    }

    if(a[5]<9 && a[0]>0){
        cout << 0;
        return 0;
    }
    if(a[0]==0){
        cout << -1;
        return 0;
    }
    if(a[0]>0 && a[5]==0){
        cout << 0;
        return 0;
    }

    if(a[5]%9==0 && a[0]>0){
        for (int i = 0; i < a[5];i++){
            cout << 5;
        }
        for (int i = a[5]; i < n;i++){
            cout << 0;
        }
    }
    else{
         for (int i = 0; i <( a[5]-(a[5]%9));i++){
            cout << 5;
        }
        for (int i = a[5]-(a[5]%9); i < n-(a[5]%9);i++){
            cout << 0;
        }
    }
}