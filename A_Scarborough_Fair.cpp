#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin>>n>>m;
  string s;
  cin>>s;
  int l,r;
  char c1,c2;
  for(int i=1; i<=m; i++){
      cin>>l>>r>>c1>>c2;

      l--;
      r--;

      for(int j=l; j<=r; j++){
          if(s[j]==c1){             
              
              s[j]=c2;
          }
      }
      
  }
  cout<<s;
}