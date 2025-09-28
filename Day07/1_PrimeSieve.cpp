// Given a integer M, generate all the prime numbers in the range [2, M]. 

#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int vis[m+1];
    for(int i=2;i<=m;i++){
        vis[i]=0;
    }
    for(int i=2;i<=m;i++){
      if(vis[i]==0){
        cout<<i<<endl;
        for(int j=i;j<=m;j=j+i){
            vis[j]=1;
        }
      }  
    }
    cout<<endl;
}