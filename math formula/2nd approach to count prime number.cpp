// method to count prime number less than n
#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int countPrime(int n) {
    int cnt=0;
    if(n<=1) return 0;
    for(int i=2;i<n;i++){
        if(isprime(i)){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n=10;
    cout<<countPrime(n);
    return 0;
}
//time-complexcity=O(n*n).
