#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int num) {
    string s = to_string(num);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool flag = false;
    
    // Check all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) { // Check if i is lucky and n is divisible by i
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
