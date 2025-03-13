#include<iostream>
using namespace std;
  bool isHappy(int n){
    if(n==1|| n==7) return true; // 1 and 7 are happy numbers
    else if(n<10) return false; // if n is less than 10, it is not a happy number
    else{
        int res=0;
        // Individual digit square sum
        while(n>0){
            int rem=n%10;
            res+=rem*rem;
            n=n/10;
        }
        return isHappy(res);// recursive call to check if the sum is a happy number
    }
    
  }



int main(){
    int n=19;
    cout<<isHappy(n);
    return 0;
}
// time complexity O(logN) space complexity O(logN)
// explanation : happy number wo hote hai jinka individually number ka sqaure karke phir add karna
// aur phir repeat karna tab tak jab tak number 1 nahi ho jaye..