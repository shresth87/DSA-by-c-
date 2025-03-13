#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
  string rotatestring(string s, int k) {
    for (int i = 0; i < s.size(); i += 2 * k) {
        // 
        if (i + k <= s.size()) {
            reverse(s.begin() + i, s.begin() + i + k);
        } else {
            reverse(s.begin() + i, s.end());
        }
    }
    return s;
  }


int main(){
    string s="abcdefg";
    int k=2;
    cout<<rotatestring(s,k);
    return 0;
}