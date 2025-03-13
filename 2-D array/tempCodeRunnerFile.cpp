#include<iostream>
#include<vector>
using namespace std;
 vector<int> wavePattern(int arr[2][2]){
    vector<int>ans;
    for(int j=0;j<2;j++){
        if(j%2==1){
            //for odd
            for(int i=1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }else{
            //for even
            for(int i=0;i<2;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
  
     // Get the wave pattern
     vector<int> result = wavePattern(arr);

     // Print the result
     cout << "Wave pattern: ";
     for(int i = 0; i < result.size(); i++){
         cout << result[i] << " ";
     }
    return 0;
}