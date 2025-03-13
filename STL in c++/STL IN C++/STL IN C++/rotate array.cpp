#include<iostream>
#include<vector>
using namespace std;
 int rotateArray(vector<int>& nums , int k){
    int n=nums.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++){ // to rotate the array
        temp[(i+k)%n]=nums[i]; 
    }
    for(int i=0;i<n;i++){ // to copy the rotated array to original array
        nums[i]=temp[i];
    }
    return 0;
 }




int main(){
    vector<int> nums={11,2,23,45};
    int k=2;
    rotateArray(nums,k);
    for(int i=0;i<nums.size();i++){ // to print the rotated array
        cout<<nums[i]<<" ";
    }
    return 0;
}