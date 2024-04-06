#include<bits/stdc++.h>
using namespace std;
#define ll long long


void SORT(vector<int> &v){
    int n = v.size();

    for (int i = 0; i < n - 1;i++){
        for (int j = i + 1; j < n;j++){
            if(v[i]>v[j])
                swap(v[i], v[j]);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    SORT(v);
    for (int i = 0; i < n;i++){
        cout << v[i] << " ";
    }
        return 0;
}