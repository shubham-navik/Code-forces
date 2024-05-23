#include<bits/stdc++.h>

using namespace std;

int main(){
   long long  int n;
    cin >> n;
    long long int k;
    cin >> k;

    int r = n % k;

    cout << n + k - r;
}