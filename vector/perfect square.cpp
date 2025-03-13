#include<iostream>
using namespace std;
 long long int square(int n){
  int st=0,end=n-1;
  if(n==1 || n==0){
    return n;
  }
  while(st<=end){
    long long int  mid=st+(end-st)/2;
    long long int sq=mid*mid;
    if(sq==n){
        return mid;
    }
    if(sq>n){
        end=mid-1;
    }
    if(sq<n){
        st=mid+1;
    }

  }
   return 0;
 }
 int main(){
    int n=16;
    cout<<square(n)<<endl;
    return 0;
 }