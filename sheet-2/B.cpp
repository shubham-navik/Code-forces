#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    if( n == 1)
        cout << -1 << endl;
    for (int i = 2; i <= n;i++){
        if(i % 2 == 0)
        cout << i << endl;
    }
        return 0;
}