#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    int a = 1-4, b = 2-4, c = 3-4;
    for (int i = 0; i < n;i++){
        cout << a + 4 << " " << b + 4 << " " << c + 4 << " PUM\n";
        a = a + 4;
        b += 4;
        c += 4;
    }
        return 0;
}