#include<iostream>
#include<string>
using namespace std;
 char reversedwords(char ch[], int len){
    int start=0;
    // outer loop will run till the length of char array
    for(int i=0;i<=len;i++){
        // if we get space or null character then we will print the word in reverse order
        if(ch[i]==' '|| ch[i]=='\0'){

            for(int j=i-1;j>=start;j--){
                cout<<ch[j];
            }
            cout<<" ";
            // assign the value of i+1 to start so that we can get the next word
            start=i+1;

        }
    }
 }







int main(){
    char ch[]={"my name is love"};
    int i=0;
    // it will calculate the length of char array
    while(ch[i]!='\0'){
        i++; 
    }
    // assign length of char array to len
    int len=i;
    // calling the function
    reversedwords(ch , len );
    return 0;
}