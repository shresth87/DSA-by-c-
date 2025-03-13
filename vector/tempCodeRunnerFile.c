#include<iostream>
#include<string>
using namespace std;
   int stringcompression(char chars[],int n){
    int i=0;
    int count=0;
    int ansIndex=0;
    while(i<n){
        int j=i+1;
        while(j<n && chars[j]==chars[i]){
            j++;
        }
        chars[ansIndex++]=chars[i];
        count=j-i;
        if(count>1){
            string cnt=to_string(count);
                    for(char ch: cnt){
                        chars[ansIndex++]=ch;
                    }
        }
        i=j;
    }
    return ansIndex;
   }
int main(){
   char chars[7] = ["a","a","b","b","c","c","c"];
    int n = 7;
    cout<<stringcompression(chars,n);
    return 0;
}