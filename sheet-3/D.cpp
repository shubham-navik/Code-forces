#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] <= 10){
            cout << "A[" << i << "] = " << v[i] << endl;
        }
    }
        return 0;
}