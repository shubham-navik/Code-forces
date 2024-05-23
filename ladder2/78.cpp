#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, d;
    cin >> k >> d;
    if(k>=2 && d==0){
        cout<<"No solution";
        return 0;
    }

    char s[2*k];
    if(d<=k){
        for (int i = 0;i<k;i++){
        if(d>0){
            s[i] = '1';
            d--;
        }
        else{
            s[i] = '0';
        }
    }

    for (int i = 0; i < k;i++){
        cout << s[i];
    }
    }
    else{
        for (int i = 0;i<k;i++){
        if(d>0){
            s[i] = d+'0';
            d=0;
        }
        else{
            s[i] = '0';
        }


    }
     for (int i = 0; i < k;i++){
        cout << s[i];
    }


    }
}