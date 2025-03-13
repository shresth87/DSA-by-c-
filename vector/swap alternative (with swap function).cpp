#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   void swap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i+1]<n){
            swap(arr[i],arr[i+1]);
        }

    }

   }
int main(){
    int arr[8]={2,5,9,4,7,6,1,0};
    int n=8;
    swap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}