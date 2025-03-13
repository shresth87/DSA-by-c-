#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  int median(vector<int>& num1 , vector<int>& num2){
    int n=num1.size();
    int m=num2.size();
    vector<int>num3;
    // copy num1 to num3
    for(int i=0;i<n;i++){
        num3.push_back(num1[i]);
    }
    // copy num2 to num3
    for(int i=0;i<m;i++){
        num3.push_back(num2[i]);
    }
    // sort the num3 array
    sort(num3.begin(),num3.end());

    int total =num3.size();
    if(total%2==0){
        int mid1=total/2;
        int mid2=mid1-1;
        return (num3[mid1]+num3[mid2])/2.0;
    }else{
        int mid=total/2;
        return num3[mid];
    }
  }
int main(){
    vector<int>num1={1,2,3};
    vector<int>num2={6,8};
    cout<<median(num1,num2)<<endl;
    return 0;
}
