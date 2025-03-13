#include<iostream>
#include<vector>
  using namespace std;
   int main(){
    vector<int>nums={1,2,3,4,8,9,5,3,1};
    int p=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            cout<<nums[i];
        }
    }
    return 0;
   }

   // time-complexicity=O(n).