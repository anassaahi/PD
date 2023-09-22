#include <iostream>
using namespace std;
main()
{
	cout << "Enter the size of the fertilizer bag in pounds: ";
	int size;
	cin >> size;
	cout << "Enter the cost of the bag: $";
	int cost;
	cin >> cost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin >> area;
	float costpp;
	costpp = cost/size;
	float costps;
	costps = cost/area;
	cout << "Cost of fertilizer per pound: $"<<costpp<<endl;
	cout << "Cost of fertilizing per square foot: $"<<costps;
}