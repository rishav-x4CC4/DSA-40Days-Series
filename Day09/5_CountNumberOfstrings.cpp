#include<iostream>
#include<string>
using namespace std;

int main(){
   
    char arr1[]={'a','b','c','d','e','\0'};
    int ans=0,i=0;
    while(arr1[i]!='\0'){
        ans++;
        i++;
    }
    cout<<ans;
}
