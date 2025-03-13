#include<iostream>
#include<vector>
using namespace std;

vector<char> reverse(vector<char>& a) {
    int s = 0, e = a.size() - 1;
    while (s < e) {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    return a;
}

int main() {
    vector<char> a = {'s', 'h', 'r', 'e', 's', 'h', 't', 'h', 'a'};
    
    reverse(a);
    
    for (auto i : a) {
        cout << i << " ";
    }
    
    return 0;
}
                                                                        