#include<bits/stdc++.h>
using namespace std;
#define M =
int main(){
   long long int x, y;
    cin >> x >> y;
    int m;
    cin >> m;
    vector<long long int> v;
    v.push_back(0);
    v.push_back(x);
    v.push_back(y);

    for (int i = 2; i <= m;i++){
        v[i + 1] = v[i] - v[i - 1];
    }
    if(v[i]>=m){
        cout << 0;
        cout<< endl;
    }
    return 

    
}