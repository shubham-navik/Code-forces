#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        string s1(n - i, ' ');
        string s2((i - 1) * 2 + 1, '*');
        cout << s1 + s2 << endl;
    }
        return 0;
}