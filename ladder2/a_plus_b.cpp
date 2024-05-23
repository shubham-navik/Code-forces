#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    int k = t;
    int a[t];
    while(t--){

        string s;

        cin >> s;
        a[t] = (s[0] - '0') + (s[2] - '0');
    }

    for (int i = k - 1; i >= 0;i--){
    cout << a[i] << endl;
    }
}