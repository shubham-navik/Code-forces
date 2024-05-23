#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long int> v1;
    vector<long long int> v2;
    while(t--){
        long long int l, r;
        cin >> l >> r;
        long long int x, y;
        x = 0;
        y = 0;
        if(l*2<=r){
            v1.push_back(l);
            v2.push_back(2 * l);
        }
        else{
            v1.push_back(-1);
            v2.push_back(-1);
        }
    }

    for (int i = 0; i < v1.size();i++){
        cout << v1[i] << " " << v2[i] << endl;
    }
}