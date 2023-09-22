#include <iostream>
using namespace std;
main()
{
	cout << "Enter Imposter Count: ";
	int imposter;
	cin >> imposter;
	cout << "Enter Player Count: ";
	float player;
	cin >> player;
	float percentage;
	percentage = (imposter/player)*100;
	cout << "Chance of being an imposter: "<<percentage<<"%";
}