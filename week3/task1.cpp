#include <iostream>
using namespace std;
main()
{
	cout << "Enter the number of sides of the polygon: ";
	int number;
	cin >> number;
	int angles;
	angles = (number-2)*180;
	cout << "The sum of internal angles of a "<<number<<"-sided polygon is: "<<angles<<" degrees";
}