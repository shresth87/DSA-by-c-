#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  vector<int>sqSorted(vector<int>& arr){
    int n=arr.size();
    vector<int>res(n);
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[i]*=arr[i];
        }

    }
     for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
          swap(arr[i],arr[j]);
        }
      }
     }
     return arr;
  }
int main(){
    vector<int>arr={-6,-3,2,1,5};

    sqSorted(arr);
    
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}