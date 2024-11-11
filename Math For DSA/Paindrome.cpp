#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    return (rev == n);
}

int main() {
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    bool ans = isPalindrome(n);
    if (ans) {
        cout << "The Number is Palindrome" << endl;
    } else {
        cout << "The Number is not Palindrome" << endl;
    }
    return 0;
}
