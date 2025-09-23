#include<iostream>
using namespace std;
int SquareRoot(int x){
    for(int i=0;i<=(x/2);i++){
        if((i*i)==x){
            cout<<i;
            
        }
    }
}
int main(){
   int n;
   cout<<"enter the given number: ";
   cin>>n;
   SquareRoot(n);
}