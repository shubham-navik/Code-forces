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

// Function for modular exponentiation
ll power(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y & 1) res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

// Function for finding the greatest common divisor (GCD)
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function for finding the least common multiple (LCM)
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Function for binary search
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Target not found
}

// Function for prefix sum
vector<int> prefixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

void solve(){
    // Your solution code goes here
    int x, y;
    cin >> x >> y;

    if(x == 0  || y ==0){
        cout << "black\n";
        return;
    }
    if(x>0 && y >0 || x<0 && y <0){
        double d = sqrt(pow(x, 2) + pow(y, 2));
        int x = ceil(d);
        if(x == d){
                cout << "black\n";
        return;  
        }
        cout << ((!(x & 1) ) ? "white\n" : "black\n");
        return;
    }

    else{
                double d = sqrt(pow(x, 2) + pow(y, 2));
        int x = ceil(d);
                if(x == d){
                cout << "black\n";
        return;  
        }
        cout << (((x & 1) ) ? "white\n" : "black\n");
        return;
    }
}

int main() {
    fastio; // for faster input/output

    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}