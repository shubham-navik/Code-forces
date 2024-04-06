#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = m-1; j >= 0;j--){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


        return 0;
}