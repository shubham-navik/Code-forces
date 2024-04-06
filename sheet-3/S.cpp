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

    int x;
    cin >> x;
    bool found = false;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(v[i][j] ==x){
                found = true;
                break;
            }
        }
    }

    if(found){
        cout << "will not take number\n";
    }else{
        cout << "will take number\n";
    }


    return 0;
}