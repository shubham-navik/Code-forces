#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> v;
    while(t--){
        int n;
        cin >> n;
        if(n>=1900){
            v.push_back(1);
            // continue;
        }
        if(n>=1600 && n<=1899){
            v.push_back(2);
            // continue;
        }
        if(n<=1599 && n>=1400){
            v.push_back(3);
        }
        if(n<=1399){
            v.push_back(4);
        }
    }

    for (int i = 0; i < v.size();i++){
        cout << "Division " << v[i] << endl;
    }
}