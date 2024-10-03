#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,c=0;
    int r=2,g=5, b=8;
    cin>>n>>k;
c=((n*r)/k)+((n*g)/k)+((n*b)/k);
if((n*r)%k!=0) c++;
 if((n*g)%k!=0) c++;
 if((n*b)%k!=0) c++;


cout<<c;
}