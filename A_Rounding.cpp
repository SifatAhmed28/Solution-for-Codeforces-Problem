#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int lstn;
    if (n<10){
        lstn=n;
    }
    else{
        lstn=n%10;
    }
    if(lstn==0){
        n=n+0;
    }
    else if(lstn<=5){
        n=n-lstn;
    }
    else{
        int temp=10-lstn;
        n=n+temp;
    }
    cout<<n;
    
}
