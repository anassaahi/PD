#include <iostream>
#include <string>

using namespace std;

main()
{
    cout <<"Enter Hours: ";
    int hours;
    cin >> hours;
    cout <<"Enter Minutes: ";
    int minutes;
    cin >> minutes;
    minutes += 15;
    hours += minutes/60;
    minutes %= 60;
    hours %= 24;
    to_string(hours);
    to_string(minutes);
    cout << hours<<":"<<minutes;
}