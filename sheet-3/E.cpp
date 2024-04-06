#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int m = INT_MAX;
    pair<int, int> p;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] < m){
            p.first = v[i];
            m = v[i];
            p.second = i+1;
        }

    }

    cout << p.first << " " << p.second << endl;
    return 0;
}