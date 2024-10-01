#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;
    cin>>n;
    if( n>1){
        a=(n/2)+1;
        b=a/2;
        if(b==1){
            a=a+1;
            b=b+1;
        }
        if(a%b !=0){
            a+=a%b;
            cout<<a<<" "<<b;
        }
        
    }
    else if(n==1){
        cout<<-1;
    }
}