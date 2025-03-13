#include<iostream>
#include<vector>
using namespace std;
  vector<int>merge(vector<int>a1,int n , vector<int>a2 , int m , vector<int>& result){
    int i=0,j=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            result.push_back(a1[i]);
            i++;
        }
        else{
            result.push_back(a2[j]);
            j++;
        }
    }
    while(i<n){ // Add remaining elements of a1 (if any)
        result.push_back(a1[i]);
        i++;
    }
    while(j<m){// Add remaining elements of a2 (if any)
        result.push_back(a2[j]);
        j++;
    }

    return result;
  }




int main(){
    vector<int>a1={1,3,5,7,9};
    int n=5;
    int m=5;
    vector<int>a2={2,4,6,8,10};
    vector<int>result;
    merge(a1,n,a2,m,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}