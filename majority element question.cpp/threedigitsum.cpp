#include<iostream>
#include<vector>
 using namespace std;
   int sumthreedigit(vector<int>&nums ,int target){
      int ans=0;
      for(int i=0;i<nums.size();i++){
        if(i<=3){
            ans+=nums[i];
        }

      }
              cout<<ans;
      return 0;
   }
   int main(){
    vector<int>nums={-1,2,1,-4};
    int target=1;
    sumthreedigit(nums,target);
    return 0;
   }