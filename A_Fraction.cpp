#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0;
    cin>>n;
for(int i=1; i<=n; i++){
int j=n-i;
if(i<j && __gcd(i,j)==1){
    a=i;
    b=j;
}
}
cout<<a<<" "<<b;
}