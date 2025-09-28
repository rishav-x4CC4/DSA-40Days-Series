#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smx[n],pmx[n];
    for(int i=0;i<n;i++){
        if(i==0){
            pmx[i]=arr[i];
        }else{
            pmx[i]=max(arr[i],pmx[i-1]);
        }
    }
    for(int i=n-1;i>0;i--){
        if(i==n-1){
            smx[i]=arr[i];
        }else{
            smx[i]=max(arr[i],smx[i+1]);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans= ans + min(pmx[i],smx[i])-arr[i];
    }
    cout<<ans<<" "<<endl;
}