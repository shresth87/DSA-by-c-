#include<iostream>
using namespace std;
 int climbStair(int n){
   if(n<=2)return n;
   else{
    int f=1,s=2,t;
    for(int i=3;i<=n;i++){
        t=f+s;
        f=s;
        s=t;
    }
    return s;
   }
 }
 int main(){
    int n = 8;
    cout << "Number of ways to climb the stairs: " << climbStair(n);
    return 0;
 }

 //time-complexcity=O( n).