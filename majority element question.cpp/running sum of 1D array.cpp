#include<iostream>
#include<vector>
using namespace std;
  vector<int>sum(vector<int> &nums){
    for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
  }


int main(){
    vector<int>nums={1,2,3,4};
    sum(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// Output: [1,3,6,10].