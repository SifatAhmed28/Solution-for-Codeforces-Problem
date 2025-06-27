#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,n;
    cin>>s;
    int c=0;

    for(int i=0; i<s.length(); i++){
        if(s.substr(i,3)=="WUB" && c==0){
            i+=2;
        }
        else if(s.substr(i,3)=="WUB" && c!=0){
            n+=" ";
            i+=2;
        }
        else{
            n+=s[i];
            c++;
        }
    }
    cout<<n<<endl;
    return 0;
}