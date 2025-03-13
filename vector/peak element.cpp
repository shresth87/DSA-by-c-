#include<iostream>
 using namespace std;
   int peak(int nums[],int n){
    int leftsum=0,totalsum=0;

    for(int i=0;i<n;i++){
        totalsum+=nums[i];
    }
    for(int i=0;i<n;i++){
       
    if(leftsum==(totalsum-leftsum-nums[i])){
        return i;
   }else{
    leftsum+=nums[i];
   }
   
}
return -1;
}
int main(){
    int nums[6]={1,7,3,6,5,6};
    int n=6;
    cout<<peak(nums,n);
    return 0;
}