#include<iostream>
#include<string>
using namespace std;
 
    bool reverseCheck(string s,int n){
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
          
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s,int n) {

        return  reverseCheck(s,n);
      }
int main(){
    char s[]={"A Man, A Plan, A Canal: Panama"};
    string str="";
   
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) {
            str += tolower(s[i]);
        }
    }
    int n=str.length();
   if( validPalindrome(str,n)){
         cout<<"true";
   }else{
         cout<<"false";
   }
    return 0;
}