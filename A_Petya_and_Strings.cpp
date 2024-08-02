#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
        transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
        transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    int p=str1.compare(str2);
    cout<<p;
}