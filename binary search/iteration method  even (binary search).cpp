#include<iostream>
#include<vector>
 using namespace std;
   int BINSE(vector<int> &nums,int tar){
    int st=0;
    int n=8;
    int end=n-1;
    while(st<=end){
      int mid=st+(end-st)/2;
      if(tar>nums[mid]){//this will work from mid to end.
            st=mid+1;
      }else if(tar<nums[mid]){//this will work from start to mid.
        end=mid-1;
      }else{
        return mid;
      }
    }   
    return -1;
   }
   int main(){
    vector<int>nums={1,2,5,8,9,12,15,17};
    int tar=15;
    cout<<BINSE(nums,tar)<<endl;
    
    return 0;
   }

   // time-complexcity =O(log n).