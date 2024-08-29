#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of friends

    int *s = new int[n + 1]; // Correctly allocate memory after reading n
    
    // Array p will hold the inverse of the input mapping
    int *p = new int[n + 1];

    // Read the input for s, the giver list
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    // Determine who gave gifts to whom
    for (int i = 1; i <= n; i++) {
        p[s[i]] = i; // Friend i gave a gift to friend s[i]
    }

    // Output the result
    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    
    cout << endl;

    // Free the dynamically allocated memory
    delete[] s;
    delete[] p;

    return 0;
}
