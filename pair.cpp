#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k = ";
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<" "<<arr[i];
                cout<<" "<<arr[j];
                return 0;
            }
        }
    }
    return 0;
}