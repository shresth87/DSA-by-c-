#include<iostream>
#include<string>
using namespace std;
   int stringcompression(char chars[],int n , int k){
    int i=0;
    int count=0;
    int ansIndex=0;
    while(i<n){
        int j=i+1;
        while(j<n && chars[j]==chars[i]){
            j++;
        }// loop se bahar kab aaoge
        // jab puri string traverse ho jayegi
        // jab hame nxt element mil jayega
        chars[ansIndex++]=chars[i];
        count=j-i;

        if(count>1){// agar count 1 se jyada hai toh usko string me convert karke add karna hai
            string cnt=to_string(count);
                    for(char ch: cnt){
                        // converting int to char
                        chars[ansIndex++]=ch;
                    }
        }
        i=j;
    }
    return ansIndex;
   }
int main(){
   char chars[] = {'a', 'a','a', 'b', 'd', 'c', 'c', 'c'};//s = "aaabcccd", k = 2
    int n = 7;
    int k=2;
    int newLength=stringcompression(chars,n ,k);
    cout << "Compressed string: ";
    // Output the compressed string
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;

    // Output the length of the compressed string
    cout << "New length: " << newLength << endl;

    return 0;
}