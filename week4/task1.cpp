#include <iostream>
using namespace std;
void isequal(int x, int y);
main(){
cout << "Enter the first number: ";
int x;
cin >> x;
cout << "Enter the second number: ";
int y;
cin >> y;
isequal(x, y);
}
void isequal(int x, int y)
{
{if (x != y)
cout << "false";
}
{if (x == y)
cout << "true";
}
}