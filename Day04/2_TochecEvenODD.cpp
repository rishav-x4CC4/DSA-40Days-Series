#include<iostream>
using namespace std;

bool EvenOdd(int n){
    if(n%2==0){
        return true;
    }else{
        return false;

    }
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<EvenOdd(n)<<endl;
}