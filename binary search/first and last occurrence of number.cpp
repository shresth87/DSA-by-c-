// BINARY SEARCH APPROACH.
#include<iostream>
using namespace std;
 int firstOccurrence(int nums[],int n,int key){
    int st=0,end=n-1;
    int mid=st+(end-st)/2;
    int ans=-1;
    while(st<=end){
        if(nums[mid]==key){
            ans=mid;
            end=mid-1;

        }else if(nums[mid]>key){
            end=mid-1;
        }else{
            st=mid+1;
        }
        mid=st+(end-st)/2;
    }
    return ans;
 }
 int lastOccurrence(int nums[],int n,int key){
    int st=0,end=n-1;
    int mid=st+(end-st)/2;
    int ans=-1;
    while(st<=end){
        if(nums[mid]==key){
            ans=mid;
            st=mid+1;

        }else if(nums[mid]>key){
            end=mid-1;
        }else{
            st=mid+1;
        }
        mid=st+(end-st)/2;
    }
    return ans;
 }
 int main(){
    int nums[6]={1,2,3,3,4,5};
    int n=6;
    int key=3;
    cout<<"first Occurrence of key is"<<firstOccurrence(nums,n,key)<<endl;
    cout<<"last occurrence of key is"<<lastOccurrence(nums,n,key)<<endl;
    return 0;
 }

 //time complexcity= O(log n).