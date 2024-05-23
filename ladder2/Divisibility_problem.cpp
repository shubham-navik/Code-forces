#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<long long int> v;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        if(a%b==0){
            v.push_back(0);
        }
        else{
            v.push_back(b - a % b);
        }
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}