#include<iostream>
using namespace std;

bool checknumber(int x){
       if(x>=0){
        return true;
       }
       else{
        return false;
       }
}
int main(){
    int x;
    cin>>x;
    cout<<checknumber(x)<<endl;
}