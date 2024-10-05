#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r, a;
    cin >> l >> r >> a;

    // If both left and right are zero, and a is zero, the result is zero.
    if (l == 0 && r == 0 && a == 0) {
        cout << 0;
        return 0;
    }

    // First, balance the pairs by making the smaller one equal to the larger.
    while (a > 0 && l != r) {
        if (l < r) l++;
        else r++;
        a--;
    }

    // After balancing, divide remaining 'a' equally between both sides.
    l += a / 2;
    r += a / 2;

    // The largest possible balanced score is twice the smaller of the two values.
    cout << 2 * min(l, r);
    return 0;
}

