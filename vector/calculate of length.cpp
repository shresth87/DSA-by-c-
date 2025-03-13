#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int getLenght(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
} 
  int main(){ 
    char name[100];
   cout<<"Enter your name: ";
    cin>>name;
    cout<<getLenght(name);
    return 0;

  }