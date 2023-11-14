#include<iostream>
using namespace std;

void convertPINToDance(string pin);

int main() {
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    if (pin.size() == 4) {
        bool valid = true;
        for (int i = 0; i < 4; ++i) {
            char character = pin[i];
            if (character < '0' || character > '9') {
                valid = false;
                break;
            }
        }
        if (valid) {
            convertPINToDance(pin);
        } else {
            cout << "Invalid input." << endl;
        }
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}

void convertPINToDance(string pin) {
    string array[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosdo", "Pop", "Lock", "Arabesque"};

    for (int j = 0; j < 4; j++) {
        int number = (pin[j] - '0' + j) % 10;
        cout << array[number];
        if (j < 3) {
            cout << ", ";
        }
    }

    cout << endl;
}
