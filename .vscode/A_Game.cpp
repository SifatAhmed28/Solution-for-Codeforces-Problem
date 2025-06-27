#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> element(n);
    for (int i = 0; i < n; i++) {
        cin >> element[i];
    }

    // Continue removing elements until only one element remains
    while (element.size() > 1) {
        if (element.size() % 2 == 0) {
            // If size is even, remove the maximum element
            auto maxIt = max_element(element.begin(), element.end());
            element.erase(maxIt);
        } else {
            // If size is odd, remove the minimum element
            auto minIt = min_element(element.begin(), element.end());
            element.erase(minIt);
        }
    }

    // After the loop, only one element remains in the vector
    cout  << element[0] << endl;

    return 0;
}