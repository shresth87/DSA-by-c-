#include<iostream>
#include<vector>
   using namespace std;
   vector<int>MAX(vector<int>V){
    int maxi=INT_8MIN;
    for(int i=0;i<n;i++){
        int prefix+=V[i];
        maxi=max(maxi,prefix);
    }
    return maxi;
   }
   int main(){
    vector<int>V={1,2,3,4,8,5,6};
    cout<<MAX(V);
    return 0;
   }