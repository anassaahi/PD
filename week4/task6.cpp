#include <iostream>
using namespace std;
void longest(int h, int m, int min);
main(){
cout << "Enter the number of hours: ";
int h;
cin >> h;
cout << "Enter the number of minutes: ";
int m;
cin >> m;
int min;
min = h*60;
longest(h, m, min);
}
void longest(int h, int m, int min)
{
{if (min > m)
cout <<h;
}
{if (min < m)
cout <<m;
}
}