#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int magicalString(string s ,int n){
    int i=2;
   
    while(s.size()<n){
          if(s[i]=='1'){
            if(s[s.size()-1]=='1'){
                s.push_back('2');
            }else{
                s.push_back('1');
            }
          }else{
            if(s[s.size()-1]=='1'){
                s.push_back('2');
                s.push_back('2');
            }else{
                s.push_back('1');
                s.push_back('1');
            }
          }
          i++;
    }
    // int count=std::count(s.begin(),s.begin()+n,'1');
    int count= std::count(s.begin(),s.begin()+n,'1');
    return count;
}
int main(){
    string s="122";
    int n=8;
    cout<<magicalString(s,n)<<endl;
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// Input: n=6, s="12211"
// Output: 3
// EXPLANATION: The magical string is "122112" and the number of 1's in the string is 3.