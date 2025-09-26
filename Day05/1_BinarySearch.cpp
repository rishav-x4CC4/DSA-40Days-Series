#include <iostream>
using namespace std;
int main(){
    int n,x;cin>>n>>x;
    int a[n];for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1,mid,ans=-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x){ans=mid;break;}
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout<<ans;
}
