#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  

    int minValue = min(n, m);  
    if (minValue % 2 == 0) {
        cout << "Malvika";  
    } else {
        cout << "Akshat";  
    }
}