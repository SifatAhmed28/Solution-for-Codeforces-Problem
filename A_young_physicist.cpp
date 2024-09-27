#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, y, z;
    long long sumx = 0, sumy = 0, sumz = 0;

    // Read the number of vectors
    cin >> n;

    // Process each vector
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;  // Read the x, y, z components
        sumx += x;
        sumy += y;
        sumz += z;
    }

    // Check if all components sum to zero
    if (sumx == 0 && sumy == 0 && sumz == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}