#include<iostream>
#include<vector>
using namespace std;

bool sortedRotated(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] > nums[i]) {
            count++;
        }
    }
    
    
    if (nums[n - 1] > nums[0]) {
        count++;
    }

   
    return count <= 1;
}

int main() {
    vector<int> nums = {1, 1, 1, 1};
    cout << (sortedRotated(nums) ? "true" : "false") << endl;
    return 0;
}
