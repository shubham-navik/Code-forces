#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int a, b;
        cin >> a >> b;
        v.push_back(a + b);
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}