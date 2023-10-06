#include <iostream>
using namespace std;
string check(string a);
main(){
cout << "Enter a character (A/a): ";
string a;
cin >> a;
check(a);
}
string check(string a)
{if (a == "a")
{cout <<"You have entered small a";} 
if (a == "A")
{cout << "You have entered Capital A";}}
