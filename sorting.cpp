//Take an array of N integers as input, sort it in ascending order using bubble sort,
// and print the result.

// Sample Input:
// 5
// 5 2 8 1 9
// Sample Output:
// 1 2 5 8 9



#include<iostream>
using namespace std ;
void sorting(int *ptr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ptr[j]>ptr[j+1]){
                int temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr,n);
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}