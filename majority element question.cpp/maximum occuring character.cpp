#include<iostream>
#include<string>
using namespace std;
   char maxOccCharacter(string s){
    int arr[26]={0};
    int val=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            val=s[i]-'a';
        }else{
            val=s[i]-'A';
        }
        arr[val]++;
    }
    int maxi=0,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];

        }

    }
    return 'a'+ans;
   }

int main(){
    string s;
    cout<<"string daalo bhai"<<endl;
    cin>>s;
    cout<<maxOccCharacter(s)<<endl;
    return 0;
}