//Take an array of N integers and a target sum, print "Yes" if a pair 
//sums to the target, otherwise "No".

// Sample Input:
// 5 9
// 1 2 3 4 5
// Sample Output:
// Yes


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] ==k){
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"no";
    return 0;

}