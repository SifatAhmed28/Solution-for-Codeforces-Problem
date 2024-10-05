#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, marked_page;
    cin>>n;
    vector<int>start(n);
    vector<int>finish(n);
    for(int i=0; i<n;i++){
        cin>>start[i]>>finish[i];
    }
    cin>>marked_page;
    for(int i=0; i<n; i++){
        if(finish[i]>=marked_page){
            cout<<n-i;
            break;
        }
    }
}