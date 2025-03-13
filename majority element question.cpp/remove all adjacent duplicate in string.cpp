#include<iostream>
#include<string>
using namespace std;
int main(){
    string s={"abbaca"};
    string ans;
    for(auto i:s){
        if(ans.back()==i){
            ans.pop_back();
        }else{
            ans.push_back(i);
        }
    }
    cout<<ans;
    return 0;
}