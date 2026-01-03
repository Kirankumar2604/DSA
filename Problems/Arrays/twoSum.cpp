#include<bits/stdc++.h>
using namespace std;
vector<int> TwoSum(vector<int>& nums, int target){

    unordered_map<int , int> mpp;

    for(int i = 0;i < nums.size();i++){

        int subValue = nums[i];
        int reqValue = target - subValue;

        if(mpp.find(reqValue) != mpp.end()){
            return {mpp[reqValue], i};
        }

        mpp[subValue] = i;
    }
    return {-1,-1};
}
int main(){

    vector<int> arr ={9,4,8,6,2};
    int target = 8;

    vector<int> result = TwoSum(arr, target);

    cout << result[0] << " " << result[1] << endl;
}