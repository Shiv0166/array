#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        if(arr[j]>arr[0]){
            arr[0] = arr[j];
        }
    }
    cout<<" "<<arr[0];
    return 0;
}