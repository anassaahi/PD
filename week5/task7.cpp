#include <iostream>

using namespace std; 

bool isSymmetrical(int num) {
    int originalNumber = num;
    int reverseNumber = 0;
    while (num > 0) {
        int digit = num % 10;
        reverseNumber = reverseNumber * 10 + digit;
        num /= 10;
    }
    return (originalNumber == reverseNumber);
}

int main() {
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        if (isSymmetrical(num)) {
            cout << "The number is symmetrical." << endl;
        } else {
            cout << "The number is not symmetrical." << endl;
        }
    } else {
        cout << "Please enter a valid 3-digit number." << endl;
    }

    return 0;
}