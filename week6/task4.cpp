#include <iostream>
using namespace std;
float amount(char , char , int );
float ramount(char , int);
string type(char );
main()
{
    char code;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    if (code == 'p' || code == 'P')
    {
        char time;
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        int min;
        cout << "Enter the number of minutes used: ";
        cin >> min;
        cout << "Service Type: "<<type(code)<<endl;
        cout << "Total Minutes Used: " << min << " minutes" << endl;
        cout << "Amount Due: $" << amount(code, time, min);
    }
    if (code == 'r' || code == 'R')
    {
        int min;

        cout << "Enter the number of minutes used: ";
        cin >> min;
        cout << "Service Type: "<<type(code)<<endl;
        cout << "Total Minutes Used: " << min << " minutes" << endl;
        cout << "Amount Due: $" << ramount(code, min);
    }
   
}
string type(char code)
{
    if (code == 'p' || code == 'P')
    {
        return "Premium";
    }
    if (code == 'r' || code == 'R')
    {
        return "Regular";
    }
}
float amount(char code, char time, int min)
{
    float amount;
    if ((code == 'p' || code == 'p') && (time == 'd' || time == 'D') && (min <= 75))
    {
        amount = 25;
    }
    if ((code == 'p' || code == 'p') && (time == 'd' || time == 'D') && (min > 75))
    {
        amount = ((min - 75) * 0.10) + 25;
    }
    if ((code == 'p' || code == 'P') && (time == 'n' || time == 'N') && (min <= 100))
    {
        amount = 25;
    }
    if ((code == 'p' || code == 'p') && (time == 'n' || time == 'N') && (min > 100))
    {
        amount = ((min - 100) * 0.05) + 25;
    }
    return amount;
}

float ramount(char code, int min)
{
    float rramount = 0;

    if ((code == 'r' || code == 'R') && (min <= 50))
    {
       
        rramount = 10;
        return rramount;
    }
    if ((code == 'r' || code == 'R') && (min > 50))
    {
        
        rramount = ((min - 50) * 0.20) + 10;
        return rramount;
    }

}
