#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pm[n],sm[n];
    for(int i=0;i<n;i++){
        if(i==0){
            pm[i]=arr[i];
        }else{
            pm[i]=arr[i]*pm[i-1];
        }
    }
    for(int i=n-1;i>0;i--){
        if(i==n-1){
            sm[i]=arr[i];
        }else{
            sm[i]=arr[i]*sm[i+1];
        }
    }
    int ans[n];
    for(int i=0;i<n;i++){
        if(i==0){
            ans[i]=sm[i+1];
        }else if(i==n-1){
            ans[i]=pm[i-1];
        }else{
            ans[i]=pm[i-1]*sm[i+1];
        }
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int ans[n];

//     // Step 1: Store prefix products in ans[]
//     ans[0] = 1;  // No elements before first element
//     for (int i = 1; i < n; i++) {
//         ans[i] = arr[i - 1] * ans[i - 1];
//     }

//     // Step 2: Multiply with suffix product from the right
//     int suffix = 1;
//     for (int i = n - 1; i >= 0; i--) {
//         ans[i] = ans[i] * suffix;
//         suffix *= arr[i];  // Update suffix for next element
//     }

//     // Output
//     for (int i = 0; i < n; i++) {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }
