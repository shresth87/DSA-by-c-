#include <iostream>
#include <vector>
using namespace std;

vector<int> pivotArray(vector<int>& V, int pivot) {
    vector<int> left;   // Elements less than the pivot
    vector<int> middle; // Elements equal to the pivot
    vector<int> right;  // Elements greater than the pivot
    
    // Partitioning the array into three parts
    for (int i = 0; i < V.size(); i++) {
        if (V[i] < pivot) {
            left.push_back(V[i]);
        } else if (V[i] == pivot) {
            middle.push_back(V[i]);
        } else {
            right.push_back(V[i]);
        }
    }
    
    // Combine the three parts into a single array
    vector<int> result;
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), middle.begin(), middle.end());
    result.insert(result.end(), right.begin(), right.end());
    
    return result;
}

int main() {
    vector<int> V = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;
    
    vector<int> result = pivotArray(V, pivot);
    
    // Output the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
