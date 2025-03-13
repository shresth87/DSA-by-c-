//print starting wali row
//print ending wala column
// print ending wali row in reverse order
//print starting wala column in reverse order
#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralPrint(int arr[3][3]){
    int n=arr.length();
    int m=arr[0].length();
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
        }
      startingCol++;
      count++;
      for(int i=startingRow;i<=endingRow;i++){
        result.push_back(arr[i][startingRow]);
      }
      endingRow--;
      count++;
      for(int i=endingCol; count<total && i>=startingCol;i--){
        result.push_back(arr[endingRow][i]);
      }
      endingCol--;
      count++;
      for(int i=endingRow;count<total && i>=startingRow;i--){
        result.push_back(arr[i][endingCol]);
        }
        startingRow++;
        count++;
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
    cout<<spiralPrint(arr);
    return 0;
}
