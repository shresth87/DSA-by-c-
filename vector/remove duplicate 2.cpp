#include<iostream>
#include<string>
#include<vector>
using namespace std;
  int main(){
    vector<string> v={"azxxzy"};
    int n=v.size();
//     for(auto &str :v){
//     for(char ch: str){
//         cout<<ch <<" "<<endl;
//     }
//   }
    for(int i=0;i<n;i++){
        string str=v[i];
        string res="";
        for(char ch: str){
            if(res.size()==0){
                res.push_back(ch);
            }
            else{
                if(res.back()==ch){
                    res.pop_back();
                }
                else{
                    res.push_back(ch);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
  }