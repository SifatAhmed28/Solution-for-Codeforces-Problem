#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t,c=0;
    cin>>n>>t;
    string s;
    cin>>s;
  
   for(c=0; c<t; c++ ){
    for(int i=0; i<n; i++){
        if( s[i]=='B' && s[i+1]=='G'){
        swap(s[i],s[i+1]);
i = i + 1;
        }
        
        
    }}
    cout<<s;
}