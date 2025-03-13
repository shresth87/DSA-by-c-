#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(26);
    v.push_back(15);
    v.push_back(4);

    // SORT FUNCTION
    sort(v.begin(), v.end());
    cout<<"sorted vector -->"<<endl;
   for (auto i: v){
    cout<<i<<" ";
   }cout<<endl;

   // BINARY SEARCH FUNCION
   cout<<"finding 26 -->"<<binary_search(v.begin(),v.end(),26)<<endl;
  

   // SWAP FUNCTION
   int a=10,b=25;
   swap(a,b);
   cout<<" a --> "<<a<<endl;
   cout<<" b --> "<<b<<endl;


   // REVERSE FUNCTION
   string abcd="shresth";
   reverse(abcd.begin(),abcd.end());
   cout<<"reverse string --> "<<abcd<<endl;
 
// ROTATED FUNCTION
   rotate(v.begin(),v.begin()+1,v.end());
   cout<<" rotated vector -->"<<endl;
   for(auto i:v){
    cout<<i<<" ";
   }


}