#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
ll t, n, k, a;
cin>>t;
while (t--) {
cin>>n>>k;
vector<ll> v(k);
for (int i=0;i<n;++i) cin>>a, v[i%k]=max(v[i%k], a);
ll s=0;
for (auto x: v) s+=x;
cout<<s<<endl;
}
return 0;
}