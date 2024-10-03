#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a=0,b=0;
    for(int i=1; i<=x; i++){
        for(int j=1; j<=x; j++){
            if(i%j==0 && i*j>x && i/j <x){
                a=i;
                b=j;
                break;
            }
        }
    }
    if(a==0){
        cout<<-1;
    }
    else cout<<a<<" "<<b;
}