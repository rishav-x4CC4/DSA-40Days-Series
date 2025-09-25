#include<iostream>
#include<cmath>
using namespace std;

bool Checkprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printprime(int m){
    for(int i=2;i<=m;i++){
        if(Checkprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<Checkprime(n)<<endl; 
    printprime(99);
}