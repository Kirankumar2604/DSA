#include<bits/stdc++.h>
using namespace std;

int majorityElement(int nums[],int n) {
    int ele = 0;
    int count = 0;
    for(int i = 0; i < n;i++){
        if(count == 0){
            count = 1;
            ele = nums[i];
        }else if( nums[i] == ele){
            count++;
        }else{
            count--;
        }
    }
    for(int i = 0; i < n;i++){
        if(ele == nums[i]){
            count++;
        }
        if(count > n/2){
            return ele;
        }
    }
    return -1;

    }
int main(){
    int nums[] = {2,2,1,1,1,2,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout<<majorityElement( nums, n)<<endl;

}