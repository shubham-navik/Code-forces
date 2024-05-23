#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin >> n;

    ll sum = 0;
    for (int i = 1; i <= n;i++){
        sum += (n - i) * i;
    }
    cout << sum+n;
}