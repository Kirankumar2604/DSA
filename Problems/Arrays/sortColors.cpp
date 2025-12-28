#include <bits/stdc++.h>
using namespace std;
void sortColors(int nums[], int n) {
        int low =0;
        int mid =0;
        int high = n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
int main(){
    int nums[] = { 2, 0, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    sortColors( nums, n);
    for (int i = 0; i < n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}