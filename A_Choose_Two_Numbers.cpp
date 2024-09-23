#include <bits/stdc++.h>
using namespace std;
bool check(int x,int a[], int n, int b[], int m){
    
    for(int i=0; i<n; i++){
      if(a[i]==x) {
          return false;
      }
      
    }
      for(int i=0; i<m; i++){
      if(b[i]==x) {
          return false;
      }
      
    }
   return true;
   
    
}
int main()
{
   
   int n,m;
   cin>>n;
   int *a=new int [n];
     for(int i=0; i<n; i++){
       cin>>a[i];
   }
   cin>>m;
   int *b=new int [m];
 
 for(int i=0; i<m; i++){
       cin>>b[i];
   }
   bool found=false;
   for(int i=0; i<n && !found; i++){
       for(int j=0; j<m; j++){
            int sum = a[i] + b[j];
            if (check(sum, a, n, b, m)) {  
                cout << a[i] << " " << b[j];  
                found=true;
                break;
          }
       }
   }
   delete [] a;
   delete [] b;
}