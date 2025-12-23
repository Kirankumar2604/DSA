#include <bits/stdc++.h>
using namespace std;



void zerotoend(int arr[],int n){
    int j = -1;
    for(int i = 0;i < n ; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if (j == -1) return;
    for(int i = j+1;i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
}

int main() {
    int arr[] = {1, 2, 3, 0, 5, 0, 7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    zerotoend(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
cout << "\n";

    return 0;
}