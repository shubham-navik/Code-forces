#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin>> n;

    // cout << floor(sqrt(10));
    if(n==floor(sqrt(n))*floor(sqrt(n))){
        cout << floor(sqrt(n)) * 4;
    }
    else
    cout << floor(sqrt(n)) * 4 + (n - floor(sqrt(n)) * floor(sqrt(n))) * 2 + 2 - 2*(n - floor(sqrt(n)) * floor(sqrt(n))) ;
}