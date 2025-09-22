#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the given number is: ";
    cin>>n;
    int a=0;
    int b=1;
    if(n==1){
        cout<<a<<endl;
    }else if(n==2){
        cout<<a<<","<<b<<endl;
    }else{
        cout<<a<<","<<b<<",";
        for(int i=2;i<n;i++){
            
            int c=a+b;
            a=b;
            b=c;
            cout<<c;
        }
    }
}
   

    