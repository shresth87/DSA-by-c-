#include<vector>
#include<iostream>
using namespace std;
bool ispossible(vector<int>& arr , int n , int m , int mid){
    int paintercount=1;
    int time=0;
    for(int i=0;i<n;i++){
        if(time+=arr[i]<=mid){
            time+=arr[i];
        }else{
            paintercount++;
            if(paintercount>m|| time>mid){
                return false;
        }
}

    }
    return true;
}
int painterpartition(vector<int>&arr , int n , int m){
  int st=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  int end=sum;
  while(st<=end){
    int mid=st+(end-st)/2;
    int ans=-1;
     if(ispossible(arr,n,m,mid)){
        ans=mid;
        end=mid-1;
     }else{
        st=mid+1;
     }
     return ans;
  }
 
}
int main(){
    vector<int>arr={5,5,5,5};
    int n=4;
    int m=2;
    cout<<painterpartition(arr,n,m);
    return 0;
}