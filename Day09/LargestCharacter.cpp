#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int mani(){
    int n;cin>>n;
    char* ans;
    for(int i=0;i<n;i++){
        char* arr;
        cin>>arr;
        if(strcmp(arr,ans)==1){
            ans=arr;
        }
    }

}