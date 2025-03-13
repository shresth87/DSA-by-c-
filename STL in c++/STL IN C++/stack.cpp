// STACK WORKS ON "LAST IN FIRST OUT".
// LAST ELEMENT ADDED IN STACK WILL BE THE TOP ELEMENT IN STACK.

#include<iostream>
#include<stack>
using namespace std;

int main(){
     stack<string>s;
     s.push("shresth");
     s.push("saxena");
     s.push("vansh");
     cout<<" top element"<<s.top()<<endl;// top element of stack.

     //s.pop();// deletion of element in stack.
     cout<<" top element"<<s.top()<<endl;
     s.push("verma");// addition of element in stack.
     cout<<" size of stack"<<s.size()<<endl;// check the size of stack.
     cout<<"empty or not "<<s.empty()<<endl;// check that stack is empty or not.
}