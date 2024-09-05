#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[5][5];
    int x, y;
    
    // Input the matrix
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) { // Assuming you're looking for the position of '1'
                x = i;
                y = j;
            }
        }
    }
    
    // Calculating the sum of the distance from (3,3)
    int sum = abs(x - 2) + abs(y - 2); // (3,3) in 1-based is (2,2) in 0-based
    cout << sum << endl;

    return 0;
}
