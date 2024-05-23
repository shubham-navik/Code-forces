#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n][2];

    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    int count = 0;

    char c = a[0][0];

    for (int i = 0; i < n;i++){
        if(c!=a[i][0]){
            count++;
            c = a[i][0];
        }

    }

    cout << count+1;
}