#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the given number is: ";
    cin>>n;
    int R=0;
    while(n>0){
        R=R*10;
        int d=(n%10);
        R=R+d;
       
        n=n/10;
    }
    cout<<R<<endl;
}