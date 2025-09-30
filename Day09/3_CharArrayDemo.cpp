#include<iostream>
#include<string>
using namespace std;

int main(){
    // char arr[]={'a','b','c','d','e','\0'};
    // cout<<arr<<endl;
    // for(int i=0;i<6;i++){
    //     cout<<arr[i];
    // }
    char arr1[]={'a','b','c','d','e'}; //will start storing the garbage value cuz there is no null pointer
    for(int i=0;i<6;i++){
        cout<<arr1[i];
    }
}
