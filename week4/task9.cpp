#include <iostream>
using namespace std;
string tpChecker(int people, int tp);
int main() {
cout << "Number of people in the household: ";
int people;
cin >> people;
cout << "Number of rolls of TP: ";
int tp;
cin >> tp;

string result = tpChecker(people, tp);
cout << result << endl;

    
}

string tpChecker(int people, int tp) {
int sheetsPerRoll = 500;
int sheetsPerPersonPerDay = 57;
int days = (tp * sheetsPerRoll) / (people * sheetsPerPersonPerDay);

if (days < 14) {
return "Your TP will only last " + to_string(days) + " days, buy more!";
} else {
return "Your TP will last " + to_string(days) + " days, no need to panic!";
    }
}


