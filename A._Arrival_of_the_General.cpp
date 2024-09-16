#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int *x = new int[n];
    
    // Use appropriate initialization for max and min
    int maxVal = INT_MIN, maxp = 0;
    int minVal = INT_MAX, minp = 0;

    // First loop to find the max value and its position
    for(int i = 0; i < n; i++){
        cin >> x[i];
        if(x[i] > maxVal){
            maxVal = x[i];
            maxp = i;
        }
    }

    // Second loop to find the min value and its position (from the back)
    for(int i = n - 1; i >= 0; i--){
        if(x[i] < minVal){
            minVal = x[i];
            minp = i;
        }
    }

    // Adjusting position of the minimum element in terms of moves
    if(minp < maxp){
        cout << ((maxp + (n - 1 - minp)) - 1);
    } else {
        cout << maxp + (n - 1 - minp);
    }

    delete[] x;  // Freeing dynamically allocated memory
    return 0;
}
