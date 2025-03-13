#include<iostream>
#include<string>
#include<vector>
using namespace std;

    string removeDuplicates(string s) {
        string res = ""; // To store the resulting string
        
        // Iterate over each character in the input string
        for(char ch: s) {
            if(res.empty() || res.back() != ch) {
                res.push_back(ch); // Add character if res is empty or if no duplicate
            } else {
                res.pop_back(); // Remove the last character if it is a duplicate
            }
        }
        
        return res; // Return the result after processing the entire string
    }
   int main(){
    string s={"abbaca"};
    cout<<removeDuplicates(s);
    return 0;
   }