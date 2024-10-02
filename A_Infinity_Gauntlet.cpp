#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string p[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string l[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    cin>>n;
    string m;
    if(n==0){
        cout<<6-n<<endl;
        for(int i=0; i<6; i++){
        cout<<l[i]<<endl;
    }
    }
    else{
    for(int i=0; i<n; i++){
        cin>>m;
           for(int j=0; j<6; j++){
        if(m==p[j]){
            p[j]="";
        }
     }   
    }
    
    cout<<6-n<<endl;
    
    
    for(int i=0; i<6; i++){
        if(p[i]!="") cout<<l[i]<<endl;
    }
}}