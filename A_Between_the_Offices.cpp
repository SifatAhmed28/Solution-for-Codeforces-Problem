#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,c=0,d=0;
    cin>>n;
    char *p=new char[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
        if(i>0){
            if(p[i-1]=='S' && p[i]=='F') c++;
            else if(p[i-1]=='F' && p[i]=='S') d++;
        }
        
    }
    
    if(c>d) cout<<"YES";
    else if(c==d) cout<<"NO";
    else cout<<"NO";
    delete []p;
}