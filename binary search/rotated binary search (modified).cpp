#include<iostream>
#include<vector>
 using namespace std;
  int RBS(vector<int>&nums,int target){
    int st=0,end=nums.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){// left sorted array
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{//right sorted array
            if(nums[mid]<=target && target <= nums[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }

    }
    return -1;

  }
  int main(){
    vector<int>nums={7,8,0,1,2,3,4,5,6};
    int target=5;
    cout<<RBS(nums,target);
    return 0;
  }

  // time-complexcity =O(log n).