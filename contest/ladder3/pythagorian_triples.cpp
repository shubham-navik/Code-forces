#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

    if(n%2!=0){
        long long int p = float(n * n) / 2.0 - 0.5;
        long long int q = float(n * n) / 2.0 + 0.5;
        if(p==0 || q==0){
            cout << -1;
            return 0;
        }
        else{
            cout << p << " " << q;
            return 0;
        }
    }
    else{
        long long int p = pow(n / 2, 2) - 1;
        long long int q = pow(n / 2, 2) + 1;

        if(p==0 || q==0){
            cout << -1;
            return 0;
        }
        else{
            cout << p << " " << q;
            return 0;
        }

    }
}