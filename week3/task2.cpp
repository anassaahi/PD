#include <iostream>
using namespace std;
main()
{
	cout << "Number of Minutes: ";
	int numberofmin;
	cin >> numberofmin;
	cout << "Frames per Second: ";
	int numberofsec;
	cin >> numberofsec;
	int frames;
	frames = (numberofmin*60)*numberofsec;
	cout << "Total Number of Frames: "<<frames;
}