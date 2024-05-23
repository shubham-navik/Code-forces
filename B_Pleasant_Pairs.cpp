#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define INF 1e9
#define MOD 1000000007
#define PI 3.14159265358979323846

string decimalToBase(ll number, ll base) {
    string result = ""; // Initialize an empty string to store the result
    while (number > 0) {
        int remainder = number % base; // Calculate the remainder when dividing by the base
        result += (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A'); // Add the digit to the result string
        number /= base; // Update the number by dividing it by the base
    }
    reverse(result.begin(), result.end()); // Reverse the result string to get the correct order of digits
    return result; // Return the result string
}


void solve() {
    // Your solution code goes here
    ll n;cin>>n;
   vll a(n+1,0);
   unordered_map<ll,ll> mp;
   for(int i = 0 ;i <n;i++){
    cin>>a[i];
    mp[a[i]]=i;
   }
   sort(a.begin(), a.end());
   ll cnt=0;
   fl(i,1,n+1){
    for(ll j=i+1;j<n+1 && a[i]*a[j]<2*n;j++){
        if((a[i]*a[j])==(mp[a[i]]+mp[a[j]])) cnt++;
    }
   }
   cout << cnt << endl;
}

int main() {
    fastio; // for faster input/output

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}