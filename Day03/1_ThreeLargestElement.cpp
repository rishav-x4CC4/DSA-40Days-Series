//print three largest number from the array
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
    int m1=0,m2=0,m3=0;
    for(int i=0;i<n;i++){
        if(arr[i]>m1){
            m3=m2;
            m2=m1;
            m1=arr[i];
        }else if(arr[i]>m2){
            m3=m2;
            m2=arr[i];
        }else if(arr[i]>m3){
            m3=arr[i];
        }
    }
    cout<<"largest element is: "<<m1<<endl;
    cout<<"second largest element is: "<<m2<<endl;
    cout<<"third largest element is: "<<m3<<endl; 
}