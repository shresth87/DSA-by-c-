#include<iostream>
#include<vector>
using namespace std;
int move(vector<int> &v){
int n=v.size();
for(int i=0;i<n;i++){
    if(v[i]==0){
        v.insert(v.begin()+i,0);
        i++;
    }
    
}
v.resize(n);
}

int main(){
    vector<int> v={1,0,2,3,0,4,5,0};
       move(v);
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}