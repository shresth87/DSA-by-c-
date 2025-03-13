#include<iostream>
using namespace std;

int fibb(int n) {
    int f = 0, s = 1, t;

    if(n == 0) 
        return f; // Return the first term
    else if (n == 2 || n==1) 
        return s; // Return the second term
    else {
        for(int i = 2; i <= n; i++) { // for third term
            t = f + s;
            f = s;
            s = t;
        }
        return s;
    }
}

int main() {
    int n = 2;
    cout << fibb(n) << endl;
    return 0;
}
