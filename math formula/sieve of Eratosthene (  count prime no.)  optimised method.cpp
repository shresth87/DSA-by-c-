 // sieve of Erathosthenes method 
 // Optimised method to count prime number
 #include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n){
    int cnt=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    return cnt;
}
  int main(){
    int n=10;
    cout<<countPrimes(n);
    return 0;
  }
  //time-complexcity=O(n[log[log n]]).