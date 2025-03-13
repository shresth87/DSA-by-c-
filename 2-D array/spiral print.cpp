//print starting wali row
//print ending wala column
// print ending wali row in reverse order
//print starting wala column in reverse order
#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralPrint(int arr[3][3]){
    int n=3;
    int m=3;
    int total=n*m;
    int count=0;
    int startingRow=0;
    int endingRow=n-1;
    int startingCol=0;
    int endingCol=m-1;
    vector<int>result;
    while(count<total){
        for(int i=startingCol;count<total && i<=endingCol;i++){
            result.push_back(arr[startingRow][i]);
            count++;
        }
      startingRow++;
     
      for(int i=startingRow;count<total && i<=endingRow;i++){
        result.push_back(arr[i][endingCol]);
        count++;
      }
      endingCol--;
      
      for(int i=endingCol; count<total && i>=startingCol;i--){
        result.push_back(arr[endingRow][i]);
        count++;
      }
      endingRow--;
  
      for(int i=endingRow;count<total && i>=startingRow;i--){
        result.push_back(arr[i][startingCol]);
        count++;
        }
        startingCol++;
     
    }
    return result;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>result=spiralPrint(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
