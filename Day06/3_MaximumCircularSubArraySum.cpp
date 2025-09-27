#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans= -1e9, sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }
    int minsum=1e9,totalsum=0,nsum=0;
    for(int i=0;i<n;i++){
        totalsum=totalsum+arr[i];
        nsum=nsum+arr[i];
        minsum = min(minsum, nsum);
        if(nsum>0){
            nsum=0;
        }
    }
    if(minsum!=totalsum){
        ans=max(ans,totalsum-minsum);
    }
    cout<<ans<<endl;

    }
