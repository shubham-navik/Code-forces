#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(vector<ll>v){

    int i = 0;
    int j = v.size() - 1;
    while(i<= j){
        if(v[i] == v[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    if(solve(v)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
        return 0;
}