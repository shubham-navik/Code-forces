#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input A, S, and B
    int A, B;
    char S;
    cin >> A >> S >> B;

    // Perform arithmetic operation based on the operator
    int result;
    if (S == '+') {
        result = A + B;
    } else if (S == '-') {
        result = A - B;
    } else if (S == '*') {
        result = A * B;
    } else if (S == '/') {
        // Check for division by zero
        if (B == 0) {
            cout << "Division by zero is not allowed." << endl;
            return 1; // Exit with error code 1
        }
        result = A / B;
    } else {
        cout << "Invalid operator." << endl;
        return 1; // Exit with error code 1
    }

    // Output the result
    cout << result << endl;

    return 0;
}
