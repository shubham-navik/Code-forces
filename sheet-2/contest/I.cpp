#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    if(a == 0 && b > 0){
        cout << "YES\n";
    }else{
        if(a%b == 0 || b%a == 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}