#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="shresth";
    m[22]="saxena";// method to add element in map.
    m[13]="vansh";
    m.insert({16,"raghav"});// 2nd method to add element in map.
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;// method to print element of map with key(1,22,13,16) and value.(shresth,saxena,vansh,raghav).
    }
    cout<<"13 is present or not"<<m.count(13)<<endl;
   
    m.erase(13);// erase function will erase that element from map.
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;// method to print element of map with key(1,22,13,16) and value.(shresth,saxena,vansh,raghav).
    }

    auto it=m.find(16);
    for(auto i=it;i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;// method to print element of map
    }
}