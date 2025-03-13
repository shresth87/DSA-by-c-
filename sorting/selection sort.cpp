#include<iostream>
#include<algorithm>
using namespace std;
  void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
        }
       
    }
    swap(arr[i],arr[minIndex]);
  }
}
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);   
    selection(arr,n);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
    
}


// time-complexcity=O(n^2).
//space-complexcity=O(1).