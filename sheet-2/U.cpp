#include<bits/stdc++.h>
using namespace std;
#define ll long long

int digit(int n){
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    for (int i = 1; i <= n;i++){
        int d = digit(i);
        if(d >= a && d <= b){
            sum += i;
        }
    } 
    cout << sum << endl;
    return 0;
}   