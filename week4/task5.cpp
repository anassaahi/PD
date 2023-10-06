#include <iostream>
using namespace std;
void possiblebonus(int x, int y, int minus);
main(){
cout << "Enter your position: ";
int x;
cin >> x;
cout << "Enter your friend's position: ";
int y;
cin >> y;
int minus;
minus = y-x;
possiblebonus(x, y, minus);
}
void possiblebonus(int x, int y, int minus)
{
{if (minus <= 6)
cout << "true";
}
{if (minus > 6)
cout << "false";
}
}