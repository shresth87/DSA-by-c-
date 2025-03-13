#include<iostream>
#include<vector>
using namespace std;
  int main(){
    vector<int>a;// created a vector with zero size.
    vector<int>a(5,1); // advance creation of vector by which the size of vector is 5 and the value are assigned to be 1.
    int n=a.size();
    a.push_back(1);// for adding number in vector from back.
     a.push_back(2);
     a.push_back(3);
     a.push_back(4);
     a.push_back(5);
     a.push_back(6);
   
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
   }
     cout<<a.capacity()<<endl;// it will check the storage of vector.
     a.pop_back();// for deletion number in vector from back.
     a.pop_back();
     int n=a.size();
     for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
     }
    cout<<" element at index 2: " <<a.at(2);
     cout<<" element at front  "<<a.front();
    cout<<" element at back " << a.back();
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
  }