#include <bits/stdc++.h>
using namespace std;

// Function to check the conditions for a given pair (a, b)
void check(int a, int b, int n) {
    // Add condition a % b == 0 to ensure b divides a
    if (a + b <= n && a * b > n && a % b == 0 && b <= n && a >= 1) {
        cout << a << " " << b;
        exit(0);  // Exit after printing the first valid pair
    }
}

int main() {
    int n;
    cin >> n;
    
    // Ensure n is greater than 1 for meaningful results
    if (n > 1) {
        for (int a = n; a >= 1; --a) {   // Try different values of a, starting from n
            for (int b = 1; b <= n; ++b) {  // Try different values of b, starting from 1
                check(a, b, n);   // Check each combination of a and b
            }
        }
        // If no valid (a, b) pair is found, print -1
        cout << -1;
    } else {
        cout << -1;   // For n <= 1, no valid pair is possible
    }

    return 0;
}
