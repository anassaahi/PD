#include<iostream>
using namespace std;
main(){
	cout << "Enter the movie name: ";
	string movie;
	cin >> movie;
	cout << "Enter the adult ticket price: $";
	int a_ticket;
	cin >> a_ticket;
	cout << "Enter the child ticket price: $";
	int c_ticket;
	cin >> c_ticket;
	cout << "Enter the number of adult tickets sold: ";
	int a_ticket_sold;
	cin >> a_ticket_sold;
	cout << "Enter the number of child tickets sold: ";
	int c_ticket_sold;
	cin >> c_ticket_sold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	float donation;
	cin >> donation;
	cout << endl;
	cout << "Movie: " << movie << endl;
	float sale;
	sale= (a_ticket * a_ticket_sold) + (c_ticket * c_ticket_sold);
	cout << "Total amount generated from ticket sales: $" << sale << endl;
	float dollars;
	dollars = sale * (donation/100);
	cout << "Donation to charity (" << donation << "%): $" << dollars << endl;
	float net_profit;
	net_profit = sale - dollars; 
	cout << "Remaining amount after donation: $" << net_profit;	

}