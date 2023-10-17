#include <iostream>
#include <windows.h>
using namespace std;
string checkPointPosition(float height, int xcord, int ycord);
main(){
    float height, xcord, ycord;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> xcord;
    cout << "Enter y coordinate: ";
    cin >> ycord;
    string get = checkPointPosition(height, xcord, ycord);
    cout << get;
}
string checkPointPosition(float height, int xcord, int ycord)
{
    bool border = (xcord >= 0 && xcord <= 3 * height && (ycord == 0 || ycord == height)) || (ycord >= 0 && ycord <= 4 * height && (xcord == 0 || xcord == 2 * height)) || (xcord == height && ycord >= height && ycord <= 3 * height);

   if (border)
    {
        return "Border";
    }
        else if (xcord > 0 && xcord < 2 * height && ycord > 0 && ycord < 4 * height) 
    {
        return "Inside";
    } 
        else 
    {
        return "Outside";
    }
}
