#include<iostream>
#include<vector>
  using namespace std;
    int main(){
        vector<int>nums={1,2,3,4,5,8,4,3,2};
        int st=1,end=nums.size()-2;

        while(st<=end){
        int mid=st+(end-st)/2;// main mid of array
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){// mid == peak element
                cout<<nums[mid];
                break;
            
            }
            
            if(nums[mid] > 0 && nums[mid]<nums[mid-1]){//right side array
                   end=mid-1;
            }else{
                st=mid+1;
             }
            
        
           
        }
     return 0;
    }

    // time-complexicity=O(log n).