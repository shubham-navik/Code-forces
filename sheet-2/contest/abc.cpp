#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";

vector<int> t;

int solve(int n, int a, int b){
    if(n <= 0){
        return 0;
    }
    if(n == 1){
        return a;
    }
    if(n == 2){
        return min(a * 2, b);
    }
    if(t[n] != -1){
        return t[n];
    }
    int p = a + solve(n - 1, a, b);
    int q = b + solve(n - 2, a, b);
    t[n] = min(p, q);
    return t[n];
}

int main(){
    int x;
    cin >> x;
    while(x--){
        int n, a, b;
        cin >> n >> a >> b;
        t.assign(n + 1, -1); // Initialize t with -1
        int ans = solve(n, a, b);
        cout << ans << endl;
    }
    return 0;
}
