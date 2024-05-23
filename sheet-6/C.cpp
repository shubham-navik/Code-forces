#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" ";

int main(){
    ll a, b;
    cin >> a >> b;
    if(a>b)
        swap(a, b);

    ll n = b - a + 1;
    ll sum = (b*(b+1)/2) - (a*(a-1)/2);
    ll odd = 0;
    if(n%2 != 0){
        odd = (a - 1)*((n/2)+1) + ((n / 2) + 1) * ((n / 2) + 1);
    }else{
        odd = (a - 1)*(n/2) + (n/2) * (n / 2);
    }
    ll even = sum - odd;
    cout << sum << "\n"
         << even << "\n"
         << odd << endl;
    return 0;
}
