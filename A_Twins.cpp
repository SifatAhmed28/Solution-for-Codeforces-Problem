#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int sum=0;
    for(int i=0; i<n; i++){
              sum+=v[i];
               }
    
    int sum1=0,c=0;
   
          for(int i=n-1; i>=0; i--){
                sum1+=v[i];
                sum-=v[i];
                c++;
                if(sum1>sum){
                    break;
                }
               }
    
  
    cout<<c<<endl;
}