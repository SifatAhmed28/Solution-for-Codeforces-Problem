#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare necessary variables
    string s;
    int n, a = 0, d = 0;

    // Take input for integer n
    cin >> n;
    
    // Take input for string s
    cin >> s;  
    
    // Loop through the string and count 'A' and 'D'
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a++;
        else if (s[i] == 'D') d++;
    }
    
    // Determine the result and print it
    if (a > d) cout << "Anton" << endl;
    else if (d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    
    return 0;
}
