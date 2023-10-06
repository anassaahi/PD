#include <iostream>
#include <cmath>
using namespace std;
float hieght(float distance, float elevation, float radian, float next, float final);
main(){
cout << "Enter the distance from the base of the tree (in feet): ";
float distance;
cin >> distance;
cout << "Enter the angle of elevation (in degrees): ";
float elevation;
cin >> elevation;
float radian;
radian = elevation/57.2958;
float next;
next = tan(radian);
float final;
final = next * distance;
hieght(distance, elevation, radian, next, final);
}
float hieght(float distance, float elevation, float radian, float next, float final)
{
cout << "The height of the tree is: "<<final<<" feet";}