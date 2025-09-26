// Given a sequence of 2N+2 non-negative numbers where each number is present twice except for two numbers which are present only once.  You've to design an algorithm to find the two unique numbers without using any extra space.


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[2*n+2];
    for(int i=0;i<2*n+2;i++){
        cin>>arr[i];
    }
    int txor=0;
    for(int i=0;i<2*n+2;i++){
        txor=arr[i]^txor;
    }
    int i=0;
    while(((txor>>i)&1)==0){
        i++;
    }
    int x1=0,x2=0;
    for(int j=0;j<2*n+2;j++){
        if((arr[j]>>i)&1){
            x1=x1^arr[j];
        }else{
            x2=x2^arr[j];
        }
    }
    cout<<x1<<" "<<x2;
}

