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
    for(int i=1;i<n;i++){
        int mei=i-1;
        for(int j=i-1;j<n;j++){
            if(arr[mei]>arr[j]){
                mei=j;
            }
        }
        swap(arr[mei],arr[i-1]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}