// Including the header file that contains various standard library functions.
// bits/stdc++.h is not standard practice, but it includes all necessary libraries for competitive programming.
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, c = 0;  // Declaring a long long integer n for input and c for counting.

    cin >> n;  // Taking input for the number n.

    // Starting the loop from 2 up to n (inclusive).
    // The reason for starting from 2 is because we are checking for conditions where (n - i) % i == 0.
    for (int i = 2; i <= n; i++) {

        // Checking if the difference between n and i is divisible by i.
        // If (n - i) % i == 0, it means that i is a valid divisor in this context, so we increment the counter.
        if ((n - i) % i == 0) 
            c++;  // Incrementing the counter for each valid i.
    }

    // Output the final count after the loop finishes.
    cout << c;
}
