#include<iostream>
#include<vector>
  using namespace std;
    int main(){
        int n=5;
        int arr[5]={1,2,3,4,5};
        int maxSum=INT8_MIN;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            maxSum=max(currsum,maxSum);
            if(currsum<0){
                currsum=0;
            }
        }
        cout<<maxSum;
        return 0;
    }


    // time-complexcity=O(n).