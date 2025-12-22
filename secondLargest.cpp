#include <iostream>
using namespace std;

int slarge(int arr[], int n){
    int large = arr[0];
    int slarge = -1;
   
    for(int i = 1; i < n-1; i++){
        if(arr[i] > large){
            slarge  = large;
            large = arr[i];    
        }
        else if(arr[i] < large && arr[i] > slarge) {
            slarge = arr[i];
        }
        
    }
    return slarge;
    
}

int main(){
int arr[] = {15, 3, 9, 1, 20, 7, 20, 11};
int n = 8;
// Expected output: 15


    cout<<slarge(arr, n)<<endl;
}