#include <bits/stdc++.h>
using namespace std;

int singlenumber(int arr[], int n) {
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<singlenumber(arr, n)<<endl;


    return 0;
}
