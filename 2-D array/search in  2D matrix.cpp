#include<iostream>
#include<vector>
using namespace std;
 bool binary(int matrix[5][5] , int target){
    int n = 5, m = 5;
    int total=n*m;
    // int st=0;
    // int end=total-1;
    // while(st<end){
    //     int  mid=st+(end-st)/2;
    //     //for row= mid/row, for col= mid%row;
    //     int element = matrix[mid/n][mid%n];
    //     if(element==target) return true;
    //     if(element<target){
    //         st=mid+1;
    //     }else{
    //         end=mid-1;
    //     }
    // }
     
       for(int i=0;i<n;i++){ // for row
        for(int j=0;j<m;j++){ // for column
            if(matrix[i][j]==target){
                return true;
            }
        }
       }
    return false;
 }
int main(){
     int matrix[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    
     int target=100;
     cout<<binary(matrix,target);
     return 0;
}
//time-complexcity= O(log(n*m)); if we use while loop 
 // time-complexcity= O(n*m).