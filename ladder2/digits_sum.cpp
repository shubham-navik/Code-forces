#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long int> v;
    while(t--){
        long long int n;
        cin >> n;
        if(n<9){
            v.push_back(0);
        }
        else{
            if(n%10==9){
                v.push_back(n / 10 + 1);
            }
            else{
                v.push_back(n / 10);
            }
        }
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}