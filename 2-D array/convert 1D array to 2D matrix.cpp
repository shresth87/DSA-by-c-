#include<iostream>
#include<vector>
using namespace std;
   vector<vector<int>>transform(vector<int>& original , int m , int n){
    int total=m*n;
    // agar total hi nhi match hua  to khali vector return karo
    if(original.size()!=total) return {};
    vector<vector<int>>copy(m,vector<int>(n));
    int k=0;
    // Print the transformed 2D vector
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j]=original[k];
            k++;
        }
    }
    return copy;
   }
int main(){
    vector<int>original ={1,2,3,4};
    int m=2; // number of rows
    int n=5; // number of column
 
    // create a 2D matrix from the vector
    vector<vector<int>>result=transform(original,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// time-complexcity = O(m*n).
// space-complexity = O(m*n).
