#include<iostream>
#include<string>

using namespace std;
char reverse(char name[] ,int n){
    int st=0,end=n-1;
    while(st<end){
        swap(name[st],name[end]);
        st++;
        end--;
    }
}
int getLenght(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
} 


int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    int n=getLenght(name);
    reverse(name , n);
    for(int i=0;i<n;i++){
        cout<<name[i];
    }
    return 0;
}