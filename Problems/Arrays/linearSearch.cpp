#include<bits/stdc++.h>
using namespace std;

void liearsearch(int arr[],int n,int k){
    for(int i = 0 ; i < n; i++){
        if(arr[i]==k){
            cout<<"index: "<<i<<endl;
        }
    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    liearsearch(arr,n,k);

    return 0;
}