// BINARY SEARCH APPROACH.
#include<iostream>
using namespace std;

int firstOccurrence(int nums[], int n, int target) {
    int st = 0, end = n - 1;
    int mid = st + (end - st) / 2;
    int ans = -1;
    while (st <= end) {
        if (nums[mid] == target) {
            ans = mid;
            end = mid - 1; // Move left to find the first occurrence
        } else if (nums[mid] < target) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans;
}

int lastOccurrence(int nums[], int n, int key) {
    int st = 0, end = n - 1;
    int mid = st + (end - st) / 2;
    int ans = -1;
    while (st <= end) {
        if (nums[mid] == key) {
            ans = mid;
            st = mid + 1; // Move right to find the last occurrence
        } else if (nums[mid] > key) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans;
}

int main() {
    int nums[8] = {1, 2, 3, 3, 3, 3, 3, 4};
    int n = 8;
    int target = 3;
    
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);
    
    cout << "First Occurrence of 3 is = " << first << endl;
    cout << "Last Occurrence of 3 is = " << last << endl;
    
    cout << "Total number of Occurrences = ";
    if (first != -1 && last != -1) {
        int total = (last - first) + 1;
        cout << total << endl;
    } else {
        cout << "No Occurrence of 3" << endl;
    }
    
    return 0;
}
//time complexcity=O(log n).