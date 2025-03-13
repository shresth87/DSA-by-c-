#include<iostream>
#include<queue>
using namespace std;
  int main(){

    // MAX HEAP 
    priority_queue<int> maxi;
     maxi.push(8);
     maxi.push(7);
     maxi.push(11);
     maxi.push(9);
     maxi.push(6);
     maxi.push(0);
      cout<<" size of priority queue "<<maxi.size()<<endl;
      int n=maxi.size();
      for(int i=0;i<n;i++){
        cout<<"sabse bada element "<<maxi.top()<<endl;
        maxi.pop();
      }cout<<endl;

      //MIN HEAP
      priority_queue<int,vector<int>,greater<int> >mini;
       mini.push(8);
       mini.push(11);
       mini.push(1);
       mini.push(0);
       mini.push(15);
       mini.push(7);
       mini.push(3);
  
       cout<<"size of min heap "<<mini.size()<<endl;
       int m=mini.size();
       for(int i=0;i<m;i++){
        cout<<"sabse chhota element "<<mini.top()<<endl;
        mini.pop();
       }

  }