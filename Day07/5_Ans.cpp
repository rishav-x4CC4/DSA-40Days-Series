#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int brr[m+n];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=n-1,k=n+m-1,j=m-1;
    while(i>=0 && j>=0){
        if(arr[i]>brr[j]){
            brr[k]=arr[i];
            k--;
            i--;
        }else{
            brr[k]=brr[j];
            k--;
            j--;
        }
    }
    while(i>=0){
            brr[k]=arr[i];
            i--;
            k--;
        }
    while(j>=0){
            brr[k]=brr[j];
            k--;
            j--;
        }
    for(int i=0;i<n+m;i++){
        cout<<brr[i];
    }
    cout<<endl;
}