#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r,a;
    cin>>l>>r>>a;
    if(a==0 && (l==0 || r==0) ){
        cout<<0;
    }
    else{
    while(a !=0){
        if(l%2 !=0){
            l++;
            a--;
        }
        else if(r%2 !=0){
            r++;
            a--;
        }
        else if(l>r){
            r++;
            a--;
        }
        else {
            l++;
            a--;
        }
       

    }
    cout<<((l)+(r))-1;
    }

    }
