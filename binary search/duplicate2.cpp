#include<iostream>
#include<vector>
using  namespace std;
 int duplicate(vector<int>& nums){
    int st=0,end=nums.size()-1;
    while(st<end){
        int mid=st+(end-st)/2;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){
                count++;
            }
        }
        if(count>mid){
            end=mid;
        }else{
            st=mid+1;
        }
        
 }
 return st;
}
int main(){
    vector<int>nums={1,2,3,4,5,6,6};
  cout<<  duplicate(nums);
    return 0;
}