#include<iostream>
using namespace std;
 int search_sorted(int arr[],int target,int n){
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return 1;
        }
        if(arr[st]==arr[mid] && arr[mid]==arr[end]){
            st++;
            end--;
        } 
        else if(arr[st]<=arr[mid]){
        if(arr[st]<arr[mid] && arr[mid]>target){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }else{
        if(arr[mid]<arr[end] && target>arr[mid]){
            st=mid+1;
    }else{
        end=mid-1;
    }
    }
    return -1;
 }
 
}
int main(){
    int arr[19] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    int target = 2;
    int n = 19;
    int result = search_sorted(arr, target, n);
    cout << "Element is present at index " << result << endl;
    return 0;
}