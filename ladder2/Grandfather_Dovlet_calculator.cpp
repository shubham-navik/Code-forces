#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findnum(int n){
    int digit[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int sum = 0;
    while(n>0){
        sum = sum + digit[n % 10];
        n = n / 10;
    }

    return sum;
}


int main(){
    int a ,b;
    // cout b;
    cin >> a >> b;
    ll total = 0;
    for (int i = a; i <= b;i++){
        total = total + findnum(i);
    }

    cout << total;
}