#include<iostream>
using namespace std;

void swapper(int &x,int &y){
    swap(x,y);
}

int main(){
    int n=20,m=30;
    swapper(n,m);
    cout<<n<<" "<<m;

}