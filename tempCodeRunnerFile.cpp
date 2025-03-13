#include<iostream>
using namespace std;
int main(){
    int num=5;
    // address of operator -> &
    cout<<"value of num -> "<< num <<endl;
    // address of num 
    cout<<"address of num -> "<< &num <<endl;
    // creating a pointer -> *
    //int *ptr=0;
    // assigning the address of num to ptr
   // ptr=&num;
   int *ptr=&num;
    cout<<" address of num ->" << *ptr<<endl;

    // int *s=ptr;
    // cout<<*s<<endl;
    // cout<<"before "<< *s<<endl;
    // (*s)++;
    // cout<<"after "<< *s<<endl;
    // s+=1;
   // cout<<*s<<endl;
   int i=3;
   int *t=&i;
   *t=*t+1;
   cout<<*t<<endl;
   cout<<"before"<<t<<endl;
   t=t+1;
   cout<<"after "<<t;
    return 0;
}
// * operator is used to get the value at the address pointed by the pointer
// & operator is used to get the address of the variable
