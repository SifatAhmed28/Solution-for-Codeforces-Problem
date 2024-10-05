#include <bits/stdc++.h>
using namespace std;
long long result(int n){
    
    if(n==1){
        return 1;
    }
    else {
        
            return (2*(pow(n,2)))-(2*n)+1;
        
        
    }
}
int main(){
    int n;
    cin>>n;
    cout<<result(n);
   }