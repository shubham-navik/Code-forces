#include<bits/stdc++.h> // Include necessary header file for standard C++ library
using namespace std; // Import the standard namespace

#define ll long long // Define macro for long long type
#define print(v, l, r)    for (int i = l; i<r;i++) cout<<v[i]<<" "; // Define macro for printing array elements

int main(){
    ll n; // Declare variable to store input number
    cin >> n; // Read input number from the user
    bool found = true; // Initialize a boolean variable to keep track if a divisor is found

    // Iterate from 2 to the square root of n
    for (int i = 2; (i * i) <= n; i++){
        // If n is divisible by i, set found to false and break the loop
        if(n % i == 0){
            found = false;
            break;
        } 
    }

    // Check if n is greater than or equal to 2
    if(n >= 2){
        // If a divisor is found, print "NO" indicating n is not prime, otherwise print "YES"
        if(!found){
            cout << "NO" << endl;
        } else {
            cout << "YES\n";
        }
    } else {
        // If n is less than 2, print "NO"
        cout << "NO\n";
    }

    return 0; // Return 0 to indicate successful execution
}
