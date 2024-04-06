#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";
#define print(Y)  cout << "YES\n";
#define print(N)  cout << "NO\n";
#define print(n)  cout << "no\n";
#define print(y)  cout << "yes\n";

int solve(string s,int a){
    for (int i = 0; i < s.length();i++){
        if(!(s[i] >= '0' && s[i] <= '9') &&( i != a))
            return 0;
    }
    return 1;
}

int main(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(s[a] == '-' && solve(s,a)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}