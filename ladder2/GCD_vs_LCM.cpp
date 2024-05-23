#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long int> v;
    while(t--){
        int n;
        cin >> n;
        v.push_back(n);
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] - 3 << " " << 1 << " " << 1 << " " << 1 << endl;
    }
}