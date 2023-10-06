#include <iostream>
using namespace std;
void finalprice(string name, float price);
main(){
cout << "Enter the country's name: ";
string name;
cin >> name;
cout << "Enter the ticket price in dollars: $";
float price;
cin >> price;
finalprice(name, price);
}
void finalprice(string name, float price)
{
{if (name == "Pakistan")
price = price - (price*5)/100;}

{if (name == "Ireland")
price = price - (price*10)/100;}

{if (name == "India")
price = price - (price*20)/100;}

{if (name == "England")
price = price - (price*30)/100;}

{if (name == "Canada")
price = price - (price*45)/100;}

cout << "Final ticket price after discount: $"<<price;
}


