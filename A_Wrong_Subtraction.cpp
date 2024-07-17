#include <iostream>  // Include the input-output stream library

using namespace std;

int main() {
    int n, k;  // Declare two integer variables: n (the number) and k (number of operations)

    // Read the values of n and k from standard input
    cin >> n >> k;

    // Perform k operations on n
    for (int i = 0; i < k; i++) {
        // Check if the last digit of n is 0
        if (n % 10 == 0)
            n = n / 10;  // If the last digit is 0, divide n by 10 (remove the last digit)
        else
            n = n - 1;  // If the last digit is not 0, subtract 1 from n
    }

    // Output the final value of n after performing k operations
    cout << n;

    return 0;  // Return 0 to indicate successful execution
}
