#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> v[i][j];
        }
    }

    int primary = 0;
    for (int i = 0; i < n; i++)
    {
        primary += v[i][i];
    }
    int secondary = 0;
    int i = 0;
    int j = n - 1;

    while(i<n && j >= 0){
        secondary += v[i][j];
        i++;
        j--;
    }

    cout << abs(primary - secondary) << endl;
    return 0;
}