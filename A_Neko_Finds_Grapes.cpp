#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0;
    cin>>n>>m;
    vector <int> v(n);
    vector <int> u(m);
   
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
     for(int i=0; i<m; i++){
        cin>>u[i];
    }
     for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            if((v[i]+u[i])%2!=0) c++;
        }
    }
    cout<<c;
}