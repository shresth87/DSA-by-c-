#include<iostream>
#include<string>
using namespace std;
char replacespace(string &str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
        temp.push_back(str[i]);
        }
    }
    cout<<temp;
}





int main(){
    string str={"Hello World"};
    cout<<replacespace(str);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// Output: Hello@40World