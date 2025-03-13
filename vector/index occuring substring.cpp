#include<iostream>
#include<string>
using namespace std;
  int indexOccur(string haystack , string needle){
     int n1=haystack.length();
     int n2=needle.length();
     int n=n1-n2;
     for(int i=0;i<n;i++){
        if(haystack.substr(i,n2)==needle){
            return i;
        }
     }
     return -1;
  }




int main(){
    string haystack={"leetcode"};
    string needle={"leeto"};
    cout<<indexOccur(haystack,needle);
    return 0;
}
//time-complexcity=O(n).
//output=-1
//EXPLANATION = The function indexOccur() takes two parameters, haystack and needle. It calculates the length of haystack and needle,
//and then check that string needle is present in haystack or not if it is present then simple return the index otherwise return -1.