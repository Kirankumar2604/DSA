#include <bits/stdc++.h>
using namespace std;

//best if array sorted
int missingvalue(int arr[],int n){
    int sum = 0;
    int aTotal = n * (n+1) / 2;
    for(int i = 0 ; i < n-1 ; i++){
        sum += arr[i];
    }
    return aTotal - sum;
}



int main(){
    int arr[] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<missingvalue(arr,n)<<endl;
}