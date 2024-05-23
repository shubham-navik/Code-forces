#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){

        int n;
        cin >> n;

        char s[n];
        cin >> s;
        sort(s,s+n);
        // cout << s[n - 1];
        // cout << arr[n - 1];
        v.push_back((s[n-1]-'0'-48));
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}