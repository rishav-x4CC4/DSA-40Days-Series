#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n = 6;
    int arr[]={2,1,6,5,6,1};
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}