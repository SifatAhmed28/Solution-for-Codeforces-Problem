#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m = 0;
    string s;
    cin >> n;
    cin >> s;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '-') {
            if (m > 0) {
                m--; 
            }
        }
        else m++;
    }
    cout << m;
}
