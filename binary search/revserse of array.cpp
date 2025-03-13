#include<iostream>
#include<vector>
using namespace std;
   vector<int> reverse(vector<int>& a){
    int s=0 ,e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
        
    }
    return a;
   }
  
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(21);
    a.push_back(10);
    a.push_back(9);
    a.push_back(5);
    a.push_back(2);
    reverse(a);
 for(auto i: a){
    cout<<i<<" ";
 }
    return 0;
}