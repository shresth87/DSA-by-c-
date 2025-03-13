#include<iostream>
#include<vector>
#include<algorithm>
  using namespace std;
    int findmin(vector<int>&nums){
        int st=0,end=nums.size()-1;
        
        
        while(st<=end){
        int mid=st+(end-st)/2;
         if(mid > 0 && nums[mid] < nums[mid-1]){
            return nums[mid];
         }
         if(nums[mid]>nums[end]){
            st=mid+1;
         }else{
            end=mid-1;
         }
        }

        return -1;

    }
    int main(){
        vector<int>nums={7,8,0,1,2,3,4,5,6};
        cout<<findmin(nums);
        return 0;
    }

    // time-complexicity=O(log n).