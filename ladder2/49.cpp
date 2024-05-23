#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int count = 0;

    long long int i = 0;

    if(n<k){
        for ( i = 2; i <= n;i++){
          if(k/i<=n) { if(k%i==0){
                count++;
            }}
        }

        cout << count;
        return 0;
    }
    else{
         for ( i = 1; i <= k;i++){
            if(k%i==0){
                count++;
            }
        }

        cout << count;
        return 0;

    }
}