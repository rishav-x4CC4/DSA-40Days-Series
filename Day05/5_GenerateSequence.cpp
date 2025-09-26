// Given a sequence of integers, design an algorithm to generate all of its subsequences. 
 
// Note  :  We define a subsequence of a given sequence as a sequence which can be obtained by 
// deleting zero or more elements from the given sequence such that the relative order
//  between the sequence elements doesn't change.  

// 2^n sub sequence from the element of n sequence.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < pow(2, n); i++){
        int j = 0;
        while(j < n){
            if((i >> j) & 1){
                cout << arr[j] << " ";
            }
            j++;
        }
        cout << endl;
    }
}


