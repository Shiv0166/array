#include<iostream>
using namespace std;

string sor(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) { 
        if(arr[i] > arr[i + 1]) {
            return "no";  // Array is not sorted
        }
    }
    return "yes";  // Array is sorted
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string k = sor(arr, n);
    cout << k << endl;
    return 0;
}
