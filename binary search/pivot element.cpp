#include<iostream>
using namespace std;
  int pivot(int arr[],int n){
     int s=0,end=n-1;
     int mid=s+(end-s)/2;
     while(s<end){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            end=mid;
        }
        mid=s+(end-s)/2;
     }
     return s;
  }
  int main(){
    int arr[5]={7,10,1,5,3};
    int n=5;
    cout<<"pivot is ="<<" "<<pivot(arr,n);
    return 0;
  }