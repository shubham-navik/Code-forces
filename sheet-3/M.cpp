#include<bits/stdc++.h>
using namespace std;
#define ll                long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int M = INT_MIN;
    int m = INT_MAX;
    pair<int, int> p;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(M < v[i] ){
            M = v[i];
            p.first = i;
        }
        if(m > v[i]){
            m = v[i];
            p.second = i;
        }
    }

    swap(v[p.first], v[p.second]);

    print(v, 0, n);
    return 0;
}