#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n==m){
        if(n%2==0){
            cout << "Malvika";
            return 0;
        }
        else{
            cout << "Akshat";
            return 0;
        }
    }

    else{
        int x = min(n, m);
         if(x%2==0){
            cout << "Malvika";
            return 0;
        }
        else{
            cout << "Akshat";
            return 0;
        }
        
    }
}