// EUCLID'S METHOD TO FIND THE GCD / HCF..
#include<iostream>
using namespace std;
int GCD(int a , int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<< "enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"GCD of "<<a <<" & "<< b<<" is -> "<<GCD(a,b);
    return 0;
}
// time-complexcity=O(log n).