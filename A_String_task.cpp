#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == 'a' || n[i] == 'o' || n[i] == 'y' || n[i] == 'e' || n[i] == 'u' || n[i] == 'i' ||
           n[i] == 'A' || n[i] == 'O' || n[i] == 'Y' || n[i] == 'E' || n[i] == 'U' || n[i] == 'I'){
            continue;
        }
        else if(n[i] >= 'A' && n[i] <= 'Z'){
            cout << "." << (char)(n[i] + 32);
        }
        else{
            cout << "." << n[i];
        }
    }
    return 0;
}
