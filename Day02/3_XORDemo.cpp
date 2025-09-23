#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int xr=0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        xr=xr^a;
    }
    cout<<xr<<endl;
    
}