#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) 
        return a; 
    return gcd(b, a % b); // Recursive call to compute GCD
}

int main() {
    int n;  
    cin >> n;  // Input the number of elements

    // Dynamically allocate memory for the array
    int* arr = new int[n]; 

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize GCD calculation with the first element
    int currentGCD = arr[0];

    // Iterate through the array to compute the GCD of all elements
    for (int i = 1; i < n; i++) {
        currentGCD = gcd(currentGCD, arr[i]); // Compute GCD of currentGCD and arr[i]
    }

    // Output the product of the GCD and the number of elements (n)
    cout << currentGCD * n << endl;

    // Free the dynamically allocated memory
    delete[] arr; 

    return 0;
}
