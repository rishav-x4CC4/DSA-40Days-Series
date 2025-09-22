#include<iostream>
using namespace std;

int square( int x){
    return x*x;
}

int sumofsquare( int x, int y){
    int ans=square(x)+square(y);
    return ans;
}


int main(){
    int a=sumofsquare(5,7);
    cout<<a<<endl;

}