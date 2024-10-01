#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    vector<int> arr(t), drr(t);
    
    for (int i = 0; i < t; i++) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int x = (a + c - 1) / c; // ceil(a / c)
        int y = (b + d - 1) / d; // ceil(b / d)

        if (x + y <= k) {
            arr[i] = x;
            drr[i] = y;
        } else {
            arr[i] = -1; // indicate failure for this test case
            drr[i] = -1;
        }
    }

    for (int i = 0; i < t; i++) {
        if (arr[i] == -1) {
            cout << -1 << endl;
        } else {
            cout << arr[i] << " " << drr[i] << endl;
        }
    }

    return 0;
}
