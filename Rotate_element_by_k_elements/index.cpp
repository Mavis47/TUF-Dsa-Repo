#include <iostream>
using namespace std;

void Rotatetoright(int arr[], int n, int k){
    if (n == 0) return;
    k = k % n;
    if (k > n) return;
    int temp[k];

    // Step 1: store last k elements
    for(int i = n - k; i < n; i++){
        temp[i - (n - k)] = arr[i];
    }

    // Step 2: shift remaining elements to right
    for(int i = n - k - 1; i >= 0; i--){
        arr[i + k] = arr[i];
    }

    // Step 3: put temp elements at the beginning
    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }
}

void Rotatetoleft(int arr[], int n, int k){
    if (n == 0) return;
    k = k % n;
    if (k > n) return;
    int temp[k];

    // Step 1: store first k elements
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    // Step 2: shift remaining elements to left
    for(int i = 0; i < n - k; i++){
        arr[i] = arr[i + k];
    }

    // Step 3: put temp elements at the end
    for(int i = 0; i < k; i++){
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to right:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int shift = 3;
    Rotatetoleft(nums, n, shift);

    cout << "After Rotating the elements to left:" << endl << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
