#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n), c(n), d(n), sum(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        sum[i] = a[i] + b[i] + c[i] + d[i]; // Calculate total sum for each student
    }
    
    // Store the sum of the first student (index 0)
    int first_student_sum = sum[0];
    
    // Sort the sum array in descending order to find ranks
    vector<int> sorted_sums = sum;
    sort(sorted_sums.begin(), sorted_sums.end(), greater<int>());
    
    // Find the rank of the first student
    for (int i = 0; i < n; i++) {
        if (first_student_sum == sorted_sums[i]) {
            cout << i + 1; // Output the rank (1-based index)
            break;
        }
    }

    return 0;
}
