#include <iostream>
using namespace std;
void pet(int holidays, int diff, int hours, int minutes, int pdiff, int phour, int pminutes);
main(){
cout <<"Holidays: ";
int holidays;
cin >> holidays;
int wdays;
wdays = 365-holidays;
int timegames;
timegames = (wdays*63 + holidays*127);
int norm = 30000;
int diff;
diff = norm-timegames;
int hours = diff /60;
int minutes = diff%60;
int pdiff;
int phour;
int pminutes;
pet(holidays, diff, hours, minutes, pdiff, phour, pminutes);
}
void pet(int holidays, int diff, int hours, int minutes, int pdiff, int phour, int pminutes)
{{if (diff >= 0)
cout << "Tom sleeps well"<<endl;}
{if (diff >= 0)
cout <<hours<<" hours and "<<minutes<<" minutes less for play"<<endl;
}
{if (diff < 0)
cout <<"Tom will run away"<<endl;}
{if (diff < 0)
{int pdiff;
pdiff = -diff;
int phour = pdiff/60;
int pminutes = pdiff%60;
cout <<phour<<" hours and "<<pminutes<<" minutes for play";}
}
}



