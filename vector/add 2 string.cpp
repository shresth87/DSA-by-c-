#include<iostream>
#include<string>
#include<algorithm> // For reverse function
using namespace std;

string addStringNumbers(string num1, string num2) {
    string result = "";
    int carry = 0;
    
    // Make sure num1 is the longer string
    if (num2.size() > num1.size()) {
        swap(num1, num2);
    }
    
    // Reverse both strings to make it easier to add from the right
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    // Add each digit starting from the right (least significant digit)
    for (int i = 0; i < num1.size(); i++) {
        int digit1 = num1[i] - '0'; // Convert char to int
        int digit2 = (i < num2.size()) ? (num2[i] - '0') : 0; // If num2 has fewer digits, treat the missing digits as 0

        int sum = digit1 + digit2 + carry; // Add digits and carry
        carry = sum / 10; // Determine carry
        result.push_back((sum % 10) + '0'); // Append the last digit of sum to the result
    }
    
    // If there is still a carry left after the loop, append it
    if (carry) {
        result.push_back(carry + '0');
    }

    // Reverse the result to get the final number
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    string num1 = "12345";
    string num2 = "678";
    
    cout << "Sum: " << addStringNumbers(num1, num2) << endl;
    
    return 0;
}
