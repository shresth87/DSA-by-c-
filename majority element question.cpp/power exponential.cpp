#include<iostream>
  using namespace std;
  double pow(double x,int  n){
    double ans=1;
    long BF=n;
if(BF<0){
            x=1/x;
            BF=-BF;

          }
          while(BF>0){
            if(BF%2==1){
                ans*=x;
            }
            x=x*x;
            BF/=2;

          }
          cout<<ans;
  }
    int main(){
          long n=-2;int x=2;
            
    pow(x,n);
    }