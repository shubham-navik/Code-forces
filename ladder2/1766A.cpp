#include<bits/stdc++.h>
using namespace std;
#define ll long long



    int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << (s.size() - 1) * 9 + (s[0] - '0') << endl;
    }

        return 0;
}