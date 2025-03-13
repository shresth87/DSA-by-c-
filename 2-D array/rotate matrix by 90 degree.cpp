#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(int arr[3][3]){
    int n=3;
    int total=n*n;
    // puri matrix ko rotate karne ke liye
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // 1st and last row ko reverse karne ke liye
    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }
}
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    rotate(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
