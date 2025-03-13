#include<iostream>
#include<vector>
   using namespace std;
     void duplicate(vector<int>&nums){
     
      int st=1;
      for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[st]=nums[i];
            st++;
            
      }
      
      }
             nums.resize(st);
             for(int val:nums){
               cout<<val <<" ";
             }
     }
     int main(){
        vector<int>nums={1,1,1,2,3,3,3,4,4,4};
        duplicate(nums);
      
        return 0;
     }