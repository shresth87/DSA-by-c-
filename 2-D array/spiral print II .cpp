#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(int n) {
    int total = n * n;
    int count = 0;

    // Create a 2D matrix of size n*n
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i * n + j + 1;  // Filling the matrix with numbers 1 to n*n
        }
    }

    vector<int> result;
    int startingRow = 0;
    int endingRow = n - 1;
    int startingCol = 0;
    int endingCol = n - 1;

    // Spiral traversal of the 2D matrix
    while (count < total) {
        // Traverse the top row (left to right)
        for (int i = startingCol; count < total && i <= endingCol; i++) {
            result.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // Traverse the right column (top to bottom)
        for (int i = startingRow; count < total && i <= endingRow; i++) {
            result.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // Traverse the bottom row (right to left)
        for (int i = endingCol; count < total && i >= startingCol; i--) {
            result.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // Traverse the left column (bottom to top)
        for (int i = endingRow; count < total && i >= startingRow; i--) {
            result.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return result;
}

int main() {
    int n = 3; // Example size of the matrix
    vector<int> result = spiralOrder(n);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
