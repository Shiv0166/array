// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int n) {
//     for (int i = 1; i < n; ++i) {
//         if (arr[i - 1] > arr[i])
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter the value of n = ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " values:\n";
//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     if (isSorted(arr, n))
//         cout << "Array is sorted\n";
//     else
//         cout << "Array is NOT sorted\n";

//     return 0;
// }

#include<iostream>
using namespace std;
string bubblee(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return "notsorted";
        }
    }
    return "sorted";
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string k = bubblee(arr,n);
    cout<<" "<<k;
    return 0;

}

