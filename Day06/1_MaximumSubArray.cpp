// Given an array of N integers, design an algorithm to find the maximum subarray sum. 


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
}