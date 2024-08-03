#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string store;  // Temporary string to store numbers without '+'

    // Extract numbers from the string
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            store += s[i];  // Add number to the store string
        }
    }

    // Sort the numbers
    sort(store.begin(), store.end());

    // Reconstruct the sorted string with '+'
    int j = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            s[i] = store[j++];  // Replace with sorted numbers
        }
    }

    // Output the sorted string
    cout << s;
}
