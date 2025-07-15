//Question 1 : Given an integer array nums, return true if any value appears at least twice in the 
//array, and return false if every element is distinct. [link]
// Examples :
// Input: nums = [1,2,3,4] Output: false
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true
// (

// #include<iostream>
// using namespace std;
// bool dupl(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]!=arr[j]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool k = dupl(arr,n);
//     cout<<" "<<k<<endl;
//     return 0;

// }


// #include <iostream>
// using namespace std;

// bool containsDuplicate(int *arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {//j =i+1 is because to not compare two number twice or save time 
//             if (arr[i] == arr[j]) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << (containsDuplicate(arr, n) ? "true" : "false") << endl;
//     delete[] arr;
//     return 0;
// }
