#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n;

    int *x=new int [n];
    int max=INT_MIN, maxp=0;
    int min=INT_MAX, minp=0;
    for(int i=0; i<n; i ++){
        cin>>x[i];
        if(x[i]>max){
            max=x[i];
            maxp=i;
        }
    }
    for(int i=n-1; i>=0; i-- ){
        if(x[i]<min){
            min=x[i];
            minp=i;
        }
    }
   
   
     
    if(minp<maxp){
        cout<<((maxp+((n-1)-minp))-1);
    }
    else{
        cout<<maxp+((n-1)-minp);
    }
    delete [] x;
}