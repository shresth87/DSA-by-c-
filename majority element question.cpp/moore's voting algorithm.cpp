#include<iostream>
#include<vector>
  using namespace std;
     int main(){
        vector<int>nums={1,2,2,1,1,1,1};
        int freq=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
     }
     return ans;
     }