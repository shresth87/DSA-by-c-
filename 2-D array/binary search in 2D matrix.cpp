#include<iostream>
#include<vector>
using namespace std;
 bool binary(int matrix[3][3] , int target){
    int n = 3, m = 3;
    int total=n*m;
    int st=0;
    int end=total-1;
    while(st<end){
        int  mid=st+(end-st)/2;
        //for row= mid/row, for col= mid%row;
        int element = matrix[mid/n][mid%n];
        if(element==target) return true;
        if(element<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;

 }
int main(){
     int matrix[3][3];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
     }
     int target=15;
     cout<<binary(matrix,target);
     return 0;
}
//time-complexcity= O(log(n*m));