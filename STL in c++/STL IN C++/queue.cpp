//  QUEUE WORKS ON "FIRST IN FIRST OUT".
//FIRST ELEMENT ADDED IN QUEUE WILL BE THE TOP ELEMENT IN QUEUE.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>s;
    s.push("shresth");
    s.push("saxemna");//addition of element in queue
    cout<<"top element in queue"<<s.front()<<endl;// check the first element in queue
    s.pop();// deletion of element in queue
    cout<<"size of queue"<<s.size()<<endl;// check the size of queue
    cout<<" empty or not "<<s.empty()<<endl;// check the queue is empty or not
}