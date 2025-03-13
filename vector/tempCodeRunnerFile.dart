#include<iostream>
#include<vector>
using namespace std;
void add(string num1,string num2){
    int n1=num1.size();
    int n2=num2.size();
    if(n1>n2){
        swap(num1,num2);
        swap(n1,n2);
    }
    string res="";
    int carry=0;
    for(int i=0;i<n1;i++){
        int sum=(num1[i]-'0')+(num2[i]-'0')+carry;
        res.push_back(sum%10+'0');
        carry=sum/10;
    }
    for(int i=n1;i<n2;i++){
        int sum=(num2[i]-'0')+carry;
        res.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry){
        res.push_back(carry+'0');
    }
    cout<<res<<endl;
}



int main(){
     string num1="123",num2="11";
      add(num1,num2);

    return 0;
}