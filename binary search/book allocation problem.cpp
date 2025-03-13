#include<iostream>
#include<vector>
using namespace std;
   bool ispossible(vector<int>& arr,int n ,int m ,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){// 1st student ke liye check karenge pagesum mai hum pages add karenge agar wo mid se zyada hua to nxt student
            pagesum+=arr[i];
    }else{
        studentcount++;
        if(studentcount>m|| arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
    }

   }
   return true;
}
  int bookallocation(vector<int>&arr,int n,int m){
      int st=0;
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];// total sum of pages
      }
      int end=sum;
      int ans=-1;
      while(st<=end){
        int mid=st+(end-st)/2;
        if (ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;// left side of mid
        }else{
            st=mid+1;// right side of mid
        }
      }
      return ans;
  }
  int main(){
    vector<int>arr={10,20,30,40};
    int n=4;// size of arr
    int m=2;// student 
    cout<<bookallocation(arr,n,m)<<endl;
    return 0;
  }