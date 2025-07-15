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
    sec(arr, n);
    if(arr[n-1] == arr[0]){
        cout<<" "<<arr[n-3];
    }
    else if(arr[n-1] == arr[n-2]){
        cout<<" "<<arr[n-3];
    }else {
        cout<<" "<<arr[n-2];
    }
    return 0;

}