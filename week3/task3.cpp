#include <iostream>
using namespace std;
main()
{
	cout << "Enter Initial Velocity (m/s): ";
	float initialvelocity;
	cin >> initialvelocity;
	cout << "Enter Acceleration (m/s^2): ";
	float acceleration;
	cin >> acceleration;
	cout << "Enter Time (s): ";
	float time;
	cin >> time;
	float finalvelocity;
	finalvelocity = (acceleration*time)+initialvelocity;
	cout << "Final Velocity (m/s): "<<finalvelocity;
}