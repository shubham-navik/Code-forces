#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector< long long int> v2;
    vector< long long int> v;

    while(t--){
       long long  int a, b;
        cin >> a >> b;
        v.push_back(-a * a);
        v2.push_back(b * b);
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << " " << v2[i] << endl;
    }
}