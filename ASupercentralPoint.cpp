#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int left = 0, right = 0, up = 0, down = 0;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            if (x[j] < x[i] && y[j] == y[i]) left++;
            else if (x[j] > x[i] && y[j] == y[i]) right++;
            else if (x[j] == x[i] && y[j] > y[i]) up++;
            else if (x[j] == x[i] && y[j] < y[i]) down++;
        }

        if (left && right && up && down) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

