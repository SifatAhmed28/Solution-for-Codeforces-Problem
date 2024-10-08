#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& x, int n) {
    sort(x.rbegin(), x.rend());
    
    int max_square_size = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] >= i + 1) {
            max_square_size = i + 1;
        } else {
            break;
        }
    }
    return max_square_size;
}

int main() {
    int n; 
    cin >> n;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        vector<int> temp(t);
        for (int j = 0; j < t; j++) {
            cin >> temp[j];
        }
        int max_square_size = find(temp, t);
        result.push_back(max_square_size);
    }

    for (int p : result) {
        cout << p << endl;
    }

    return 0;
}
