#include<iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    if (n >= 1000 && k >= 1000 && l >= 1000 && c >= 1000 && d >= 1000 && p >= 1000 && nl >= 1000 && np>=1000){
        cout << 0;
        // return 0;
    }
    else{
        cout << (min(min(k * l / nl, c * d), p / np))/n;
    }
}