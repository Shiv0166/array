#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; ++i) {
        for(int j=0; j<n-i-1; ++j) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " values:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    for(int i = 0; i < n-1; ++i) {
        if (arr[i+1] != arr[i] + 1) {
            cout << "The missing number is = " << (arr[i] + 1) << "\n";
            break;
        }
    }
    return 0;
}
