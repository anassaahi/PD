#include <iostream>
using namespace std;
void truefalse(string x);
main(){
cout << "Enter 'true' or 'false': ";
string x;
cin >> x;
truefalse(x);
}
void truefalse(string x)
{
{if (x == "true")
cout << "false";
}
{if (x == "false")
cout << "true";
}
}