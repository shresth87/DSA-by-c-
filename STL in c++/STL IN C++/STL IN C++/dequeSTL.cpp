#include<iostream>
#include<deque>
using namespace std;
  int main(){
    deque<int> d;
    d.push_back(5);
    d.push_front(10);
    int n=d.size();
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
      cout<<d.empty();
      cout<<" before erase the size = "<<d.size()<<endl;
      d.erase(d.begin(),d.begin()+1);
      cout<<" after erase the size = "<<d.size()<<endl;
  }