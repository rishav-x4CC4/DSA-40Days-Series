
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int ans=0;
    int sum=0;    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }

    cout<<ans<<endl;
}