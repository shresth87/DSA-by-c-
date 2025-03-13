#include<iostream>
#include<string>
#include<vector>
using namespace std;
  bool Rotatestring(string s ,string goal){
    if(s.size()!=goal.size()){
        return false;
    }else{
        string temp=s+s;
        if(temp.find(goal)!=string::npos){
            return true;
        }else{
            return false;
        }
    }

  } 



int main(){
    string s="abcde";
    string goal="abced";
   cout<< Rotatestring(s,goal);
    return 0;
}