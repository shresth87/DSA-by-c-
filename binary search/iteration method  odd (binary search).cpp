#include<iostream>
#include<vector>
 using namespace std;
   int BS(vector<int>& nums, int tar){
       
       int st=0;
       int n=nums.size();
       int end=nums.size()-1;
       while(st<end){
        int mid=st+ (end-st)/2;
        if(nums[mid]<tar){
            st=mid+1;
        }else if(nums[mid]>tar){
            end=mid-1;
        }else{
            return mid;
        }
       }
       return 0;
   }

   int main(){
    vector<int> nums={1,12,14,25,35};
    int tar=25;
    cout<<BS(nums,tar);
    return 0;
   }