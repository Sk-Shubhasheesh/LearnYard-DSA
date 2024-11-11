#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int temp = n;
    int sumCube = 0;
    while (n != 0) {
        int dig = n % 10; // Extract the last digit
        sumCube += (dig * dig * dig); // Accumulate the cube of the digit
        n = n / 10; // Remove the last digit
    }
    return sumCube == temp; // Check if the sum of cubes equals the original number
}

int main() {
    cout << "Enter a Number" << endl;
    int n;
    cin >> n;
    if (isArmstrong(n)) {
        cout << "The Number is an Armstrong Number" << endl;
    } else {
        cout << "The Number is not an Armstrong Number" << endl;
    }
}
