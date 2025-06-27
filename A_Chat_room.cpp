#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   string w="hello";
    int c=0;
   
    for(int i=0; i<s.length(); i++){
        if(s[i]==w[c]){
            c++;
                        }
        
    }
    
    if (c==w.length()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}