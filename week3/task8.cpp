#include <iostream>
using namespace std;
main()
{	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegprice;
	cin >> vegprice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruprice;
	cin >> fruprice;
	cout << "Enter total kilograms of vegetables: ";
	int kiloveg;
	cin >> kiloveg;
	cout << "Enter total kilograms of fruits: ";
	int kilofru;
	cin >> kilofru;
	float totalveg;
	totalveg = vegprice*kiloveg;
	float totalfru;
	totalfru = fruprice*kilofru;
	float totalcoins;
	totalcoins = totalveg+totalfru;
	float rs;
	rs = totalcoins/1.94;
	cout << "Total earnings in Rupees (Rps): "<<rs;
}

	