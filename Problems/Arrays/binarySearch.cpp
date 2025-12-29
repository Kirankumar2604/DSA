#include<bits/stdc++.h>
using namespace std;

int findBinary(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(target > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        if(target == arr[mid]){
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 14;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findBinary(arr, n, target)<<endl;
}