#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l;
        string s;
        cin >> l >> s;
        
        int days = 0;
        bool changed = true;

        while (changed) {
            changed = false;
            string temp = s;
            
            for (int j = 0; j < l - 1; j++) {
                if (s[j] == 'A' && s[j + 1] == 'P') {
                    temp[j + 1] = 'A';
                    changed = true;
                }
            }
            if (changed) {
                s = temp;
                days++;
            }
        }
        
        cout << days << endl;
    }
    
    return 0;
}
