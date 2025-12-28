#include <iostream>
using namespace std;
void large(int n , int arr[]){
    int large = 0;
    int count = 0;
    for(int i = 0 ; i <= n-1 ;i++){
        if(arr[i]>=large) {
            large = arr[i];
            
        }
    }
    cout<<large<<endl;
}
int main(){
    int n = 7;
    int arr[]= {1,2,3,4,5,6,7};
    large(n,arr);
}