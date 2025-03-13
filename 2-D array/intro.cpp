#include<iostream>
#include<algorithm>
using namespace std;
// bool isfound(int arr[3][3],int target){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
void rowSum(int arr[3][3]){
    int maxi=0;
    int index=-1;
    cout<<" row sum -> "<<endl;
    for(int i=0;i<3;i++){
        
        int sum=0;
        for(int j=0;j<3;j++){
          sum+=  arr[i][j];
         
        }
        if(maxi<sum){
            maxi=sum; 
            index=i; // storing the index of that row whose sum is maximum
        }
        
    }
    cout<<maxi<<endl;// print the maximum row sum
    cout<<index<<endl;// print the index of that row whose sum is maximum

}
void colSum(int arr[3][3]){
    cout<<"column sum ->"<<endl;
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][3];
      // taking input from user
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
       // printing the array
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
         }
          cout<<endl;
    }
 
    //cout << " enter element to search in array"<<endl;
    // int target= 4;
    // if(isfound(arr,target)){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
    //1 2 3 4 5 6 7 8 9 10 11 12
    rowSum(arr);
    colSum(arr);
    return 0;
}