#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length();i++){
        ans += (s[i] - '0');
    }
    cout << ans<<endl;
    return 0;
}