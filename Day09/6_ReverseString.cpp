#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;



int main(){
   
    char arr1[]={'a','b','c','d','e','\0'};
    reverse(arr1,arr1+5);
    cout<<arr1;

   
}
// #include<iostream>
// using namespace std;

// int main() {
//     char arr1[] = {'a', 'b', 'c', 'd', 'e', '\0'};
//     int i = 0;
//     int j = 4; // index of last character (before '\0')

//     while (i < j) {
//         swap(arr1[i], arr1[j]);
//         i++;
//         j--;
//     }

//     cout << arr1;
//     return 0;
// }
