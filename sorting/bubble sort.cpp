#include<iostream>
#include<algorithm>
using namespace std;
  int  bubble_sort(int arr[] , int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
  }
  int main(){
    int arr[5]={22,11,45,98,12};
    int n=5;
    int result=bubble_sort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
  }

  //time-complexcity=O(n^2).