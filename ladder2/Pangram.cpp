#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char c[n];
    cin >> c;

    int count[125];
    for (int i = 0; i < 125;i++)
        count[i] = 0;

    for (int i = 0; i < n;i++){
        if(c[i]<=90)
        count[c[i]+32] = 1;
        else{
        count[c[i] ] = 1;
        }
    }

    int val = 0;
    for (int i = 0; i < 125;i++){
        if(count[i]>0){
            val++;
        }
    }
    if(val==26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


}