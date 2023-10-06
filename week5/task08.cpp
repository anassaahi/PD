#include <iostream>

using namespace std; 

string OddishOrEvenish(int num) {
    int sumOfDigits = 0;
    while (num > 0) {
        int digit = num % 10;
        sumOfDigits += digit;
        num /= 10;
    }

    if (sumOfDigits % 2 == 0) {
        return "Evenish";
    } else {
        return "Oddish";
    }
}

int main() {
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    if (num >= 10000 && num <= 99999) {
        string result = OddishOrEvenish(num);
        cout << result<< endl;
    } 
    

   return 0;}
