#include <bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(int n,int arr[]){
    int count = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            if(count > max){
                max++;
            }
        }else {
            count = 0;
        }    
    }
    return max;
}
int main(){
    
    int arr[]= {1,1,0,1,1,1,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<MaxConsecutiveOnes(n,arr)<<endl;
}