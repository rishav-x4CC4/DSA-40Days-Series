// Given a sorted array of N integers, & an integer T, design an algorithm to find the index of the 1st occurrence of T in the given array. You've to output -1 if T isn't present in the array. 



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
    int ans=n;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]<t){
            l=m+1;
        }else{
            if(arr[m]==t){
                ans=min(ans,m);
            }
            r=m-1;
        }
    }
    if(ans==n){
        ans=-1;
    }
    cout<<ans<<endl;
}