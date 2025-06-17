#include <iostream>
using namespace std;

void shiftRight(int arr[], int n, int k) {
    k = k % n; // In case k > n
    int temp[n];

    // Shift elements
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    shiftRight(arr, n, k);

    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}