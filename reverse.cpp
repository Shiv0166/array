#include<iostream>
using namespace std;
void rever(int arr[], int n,int temp[]){
    for(int i=0;i<n;i++){
        temp[i] = arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<" "<<temp[i];
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
    int temp[n];
    rever(arr,n,temp);
    return 0;
}