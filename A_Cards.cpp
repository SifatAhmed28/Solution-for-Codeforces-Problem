#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    string s;
    cin>>n1;
    cin>>s;

    int o=0, n=0, e=0, z=0, r=0;
    for(int i=0; i<n1; i++){
        if(s[i] == 'o') o++;
        else if(s[i] == 'n') n++;
        else if(s[i] == 'e') e++;
        else if(s[i] == 'z') z++;
        else if(s[i] == 'r') r++;
    }


    int one=min({o,n,e});

    int zero=min({z,e-one,r,o-one});

    for(int i=0; i<one; i++){
        cout<<"1 ";
    }
      for(int i=0; i<zero; i++){
        cout<<"0 ";
    }
    return 0;
}