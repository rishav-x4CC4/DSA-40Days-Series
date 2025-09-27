#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int t;
    cout<<"enter the target: ";
    cin>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]>t){
            j--;
        }else if(arr[i]+arr[j]<t){
            i++;
        }else{
            ans++;
            i++;
            j--;
        }
    }
    cout<<ans<<endl;
}