//Take an array of N integers as input 
//and print the number of duplicate elements.

// Sample Input:
// 5
// 1 2 2 3 1
// Sample Output:
// 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//     }
//     cout<<" "<<count;
//     return 0;
// }