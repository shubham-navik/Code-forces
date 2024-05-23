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

// Function for modular exponentiation
ll power(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y & 1) res = (res * x) % MOD;
        y >>= 1; // Update y by right shifting to divide it by 2
        x = (x * x) % MOD; // Square x and take modulo to avoid overflow
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

std::vector<int> sieveOfEratosthenes(int n) {
    // Create a boolean array "prime[0..n]" and initialize all entries as true
    std::vector<bool> prime(n + 1, true);
    std::vector<int> primes;

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime number
        if (prime[p]) {
            // Update all multiples of p
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Store all prime numbers in the vector primes
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            primes.push_back(p);
    }

    return primes;
}
bool isPrime(int n) {
    if (n <= 1) return false; // 1 is not prime
    if (n <= 3) return true; // 2 and 3 are prime

    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check divisibility by numbers of the form 6k ± 1 up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true; // n is prime
}
void solve() {
    // Your solution code goes here
    int n, k;
    cin >> n >> k;

    std::vector<int> primeNumbers = sieveOfEratosthenes(n);

    set<int> s;

    for (int i = 0; i < primeNumbers.size() - 1;i++){
        if(isPrime(primeNumbers[i] + primeNumbers[i+1] +1)  && (primeNumbers[i] + primeNumbers[i+1] +1)<=n){
            s.insert(i);
        }
    }

    cout << ((s.size() >= k )? "YES\n" : "NO\n");
}

int main() {
    fastio; // for faster input/output

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}