#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    unordered_map<int, int> um;
    int ans = INT_MAX;
    while(n--){
        int x;
        cin >> x;
        um[x]++;
        ans = min(ans, x);
    }

    if(um[ans]%2 != 0)
        cout << "Lucky\n";
    else
        cout << "Unlucky\n";
    return 0;
}