#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";


int main(){
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> um;
    while(n--){
        int x;
        cin >> x;

        um[x]++;
    }

    int i = 1;

    for (int i = 0; i < m;i++){
        cout << um[i + 1] << endl;
    }
        return 0;
}