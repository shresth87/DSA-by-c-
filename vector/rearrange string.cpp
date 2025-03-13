#include<iostream>
#include<string>
using namespace std;
  string rearrangeString(string s){
     // freq count karo
     int count[26]={0};
     int n=s.length();
     for (char ch : s) {
        count[ch - 'a']++;
    }

     // max freq nikalo
        int maxi=0;
        int mostfreq=0;
        for(int i=0;i<26;i++){
            if(count[i]>maxi){
                maxi=count[i];
               mostfreq=i;
        }

    }
    // check karo ki most freq char 2 ya zyada aaye hain
     if(maxi>(n+1)/2){
        return "";
     }
     string temp(n,' ');
     int index=0;
     // even position pe phele high freq wale element add karo
     while(count[mostfreq ]>0){
        temp[index]=mostfreq+'a';
        index+=2;
        count[mostfreq ]--;
     }
     // rest char ko add karo odd position pe
     for(int i=0;i<26;i++){
        while(count[i]>0){
            if(index>=n){
                index=1;
            }
            temp[index]=i+'a';
            index+=2;
            count[i]--;

        }
}
return temp;
  }
  int main(){
    string s="aab";
    string result=rearrangeString(s);
    if (!result.empty()) {
        cout << "Rearranged string: " << result << endl;
    } else {
        cout << "Rearrangement not possible" << endl;
    }

    return 0;
  }
  //EXPLANATION= rearrange string such that no two adjacent characters are same 