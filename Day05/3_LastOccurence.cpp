#include<iostream>
using namespace std;

int main(){
    int n;
    int t;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the target: ";
    cin>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    int ans=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]<t){
            l=m+1;
        }else if(arr[m]==t){
                ans=max(ans,m);
                l=m+1;            
        }
        else{
            if(arr[m]>t){
                r=m-1;
            }
        }
    }
    if(ans==n){
        ans=-1;
    }
    cout<<ans<<endl;
}