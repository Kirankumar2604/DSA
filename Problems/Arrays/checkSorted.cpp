#include <iostream>
#include <climits>
using namespace std;

bool sortCheck(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {INT_MIN, -100, -1, 0, 5, INT_MAX};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sortCheck(arr, n);
    return 0;
}
