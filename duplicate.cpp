#include<iostream>
using namespace std;
void sec(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sec(arr,n);
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<"duplicate";
                return 0;
            }
        }
    }
    cout<<"Not duplicate";
    return 0;
}