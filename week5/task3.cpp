#include <iostream>
#include <windows.h>
using namespace std;
string final(char typecode, int price, int tax, int finalprice);
main()
{
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    char typecode;
    cin >> typecode;
    cout << "Enter the price of the vehicle: $";
    int price;
    cin >> price;
    int tax;
    int finalprice;
    string result;
    result = final(typecode, price, tax, finalprice);
    cout <<result;	

}
string final(char typecode, int price, int tax, int finalprice)
{
    if (typecode == 'M')
    {tax = price* 0.06;
    finalprice = price+tax;
    return "The final price of a vehicle of type M after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'E')
    {tax = price*0.08;
    finalprice = price+tax;
    return "The final price of a vehicle of type E after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'S')
    {tax = price*0.10;
    finalprice = price+tax;
    return "The final price of a vehicle of type S after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'V')
    {tax = price*0.12;
    finalprice = price+tax;
    return "The final price of a vehicle of type V after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'T')
    {tax = price*0.15;
    finalprice = price+tax;
    return "The final price of a vehicle of type T after adding the tax is $"+to_string(finalprice);
    }
}