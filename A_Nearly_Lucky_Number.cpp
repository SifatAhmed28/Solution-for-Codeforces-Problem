#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;  // Variable to store the input number as a string
    cin >> num;  // Read the input number from standard input
    int c = 0;   // Variable to count occurrences of '4' and '7'

    // Iterate through each character in the input string
    for (int i = 0; i < num.length(); i++) {
        // Check if the current character is '4' or '7'
        if (num[i] == '4' || num[i] == '7') {
            c++;  // Increment the counter if '4' or '7' is found
        }
    }

    // Check if the count of '4' and '7' is exactly 4 or 7
    if (c == 4 || c == 7) {
        cout << "YES";  // Output "YES" if the count is 4 or 7
    } else {
        cout << "NO";   // Output "NO" otherwise
    }

    return 0;  // Return 0 to indicate successful execution
}
