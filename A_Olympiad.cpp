#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    vector <int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        if(a[i]!=0 && (a[i] != a[i+1]))
        c++;
    }
    cout<<c;
}