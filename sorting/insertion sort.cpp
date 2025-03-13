#include<iostream>
using namespace std;
int Insertion(int arr[] , int n){
   for(int i=1;i<n;i++){
    int key = arr[i];
    int j = i-1;
    for(;j>=0;j--){
        if(arr[j]>key){
            arr[j+1] = arr[j];
        }else{
            break;
        }
    }
    arr[j+1] = key;
   }
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    Insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//best time-complexcity =O(n).
//worst time-complexcity =O(n^2).


// space complexity =O(1).