#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int x= (pow(n, 2)) * (pow(n - 1, 2) ) * (pow(n - 2, 2) ) * (pow(n - 3, 2) ) * (pow(n - 4, 2) )/120;
    cout << x;
}