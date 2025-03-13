#include<iostream>
#include<set>
using namespace std;
 int main(){
    set<int>s ;
    s.insert(10);// method to add number in set 
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(2);
    s.insert(2);
     for(auto i:s){   // [10,10,20,20,20,20,2,2].
         cout<<i<<endl;
    }

    cout<<" size of sets"<<s.size()<<endl;// size of set is 3 because it will count the element in single time.

      set<int>::iterator it=s.begin();
      it++;
    s.erase(it);// method to delete number in set
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"element present or not"<<s.count(5); // count function check that the element is present in set or not

    set<int>::iterator itr=s.find(2);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<endl;
    }
 }