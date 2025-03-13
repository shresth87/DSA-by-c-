#include<iostream>
#include<array>
using namespace std;
int main(){
   array<int,4>a={1,2,3,4};
   int size=a.size();
   
    cout<<" element at index 3 :"<<a.at(3)<<endl;
    cout<<" empty or not " <<a.empty()<<endl;
    cout<<"element at front "<< a.front()<<endl;
    cout<<"element at back "<< a.back()<<endl;

  
}