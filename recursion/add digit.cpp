#include<iostream>
#include<vector>
using namespace std;
   int add(int& num) {
        int sum=0;
        while(num>0){
        int rem=num%10;
        sum+=rem;
        num/=10;
        }
        if(sum<10){
            return sum;
        }
        else{
            return add(sum);
        }
       
      return sum;
    }



int main(){
    int num=199;
    cout<<add(num);
    return 0;
}