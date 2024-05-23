#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    int i = 1;
    v.push_back(1);
    while(v.size()!=1500 && i++){

        if(i%3!=0 && i%10!=3){
            v.push_back(i);
        }
    }

    vector<int> v2;
    while(t--){
        int k;
        cin >> k;
        v2.push_back(k);
    }

    for (int i = 0; i < v2.size();i++){
        cout << v[v2[i]-1] << endl;
    }
}