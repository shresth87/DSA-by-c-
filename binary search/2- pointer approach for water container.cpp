// 2-pointer approach for "container with most water"
#include<iostream>
#include<vector>
  using namespace std;
    int Maxwater(vector<int>& height){
    int ls=0;
    int rs=height.size()-1;
    int maxwater=0;
    while(ls<rs){
        int w=rs-ls;
        int ht=min(height[rs],height[ls]);
        int currwater=w*ht;
        maxwater=max(currwater,maxwater);
        height[ls]<height[rs]?ls++:rs--;// main step 
    }
    return maxwater;
    }
    int main(){
        vector<int>height={1,2,3,4,5,6,7};
        int n=Maxwater(height);
        cout<<n;
        return 0;
    }
    // time - complexicity =O(n).