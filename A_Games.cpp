#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0;
    cin>>n;
    int *h=new int [n];
    int *a=new int[n];
    for(int i=0; i<n; i++){
        cin>>h[i]>>a[i];
    }
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(h[i]==a[j]) c++;
        }
    }
    
    cout<<c;
    delete [] h;
    delete [] a;

    return 0;
}