#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<"the value of given number is:  "<<n<<endl;
    while(n>0){
        int a=n%10;
        sum=sum+a;
        n=n/10;

    }
    cout<<sum<<endl;
}