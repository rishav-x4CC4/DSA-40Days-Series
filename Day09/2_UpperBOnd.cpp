#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n = 6;
    int arr[] = {2, 1, 6, 5, 6, 1};

    sort(arr, arr + n);  // Must sort before using upper_bound

    int *a = upper_bound(arr, arr + n, 5);

    cout << a - arr << endl;  // Output: index of first element > 5
}
