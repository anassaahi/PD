#include <iostream>
#include <windows.h>
using namespace std;
string volume(float heigth, float length,float width, float vol, string unit);
main(){
    cout << "Enter the length of the pyramid (in meters): ";
    float length;
    cin  >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    float width;
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    float heigth;
    cin >> heigth;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometrs): ";
    string unit;
    cin >> unit;
    float vol;
    vol = (length*width*heigth)/3;
 

    string result;
    result = volume(heigth,length,width,vol,unit);
    cout <<result;
    }
string volume(float heigth, float length,float width, float vol, string unit)
{
    if (unit == "meters")
    { 
    return "The volume of the pyramid is: "+ to_string(vol)+" cubic meters";
    }
    if (unit == "millimeters")
    {
        vol = vol*1000000000;
        return "The volume of the pyramid is: "+to_string(vol)+" cubic millimeters";
        
    }
    if (unit == "centimeters")
    {
        vol = vol*1000000;
        return "The volume of the pyramid is: "+to_string(vol)+" cubic centimeters";
        
        }
    if (unit == "kilometers")
	{vol = vol/1000000000;
    return "The volume of the pyramid is: "+to_string(vol)+" cubic kilometers";
    
       }
}

