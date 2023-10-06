#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
cout << "Enter volume of the pool in liters: ";
int v;
cin >> v;
cout << "Enter flow rate of the first pipe per hour: ";
int p1;
cin >> p1;
cout << "Enter flow rate of the second pipe per hour: ";
int p2;
cin >> p2;
cout << "Enter hours that the worker is absent: ";
int h;
cin >> h;
float flowp1;
flowp1 = h*p1;
float flowp2;
flowp2 = h*p2;
float totalflow;
totalflow = flowp1+flowp2;
int percentfull;
percentfull = (totalflow/v)*100;
int percentp1;
percentp1 = (flowp1/totalflow)*100;
int percentp2;
percentp2 = (flowp2/totalflow)*100;

if (totalflow <= v)
{cout << "The pool is "<<percentfull<<"% full. Pipe 1: "<<percentp1<<"%. Pipe 2: "<<percentp2<<"%.";}  
if (totalflow > v)
{int overflow;
overflow = totalflow-v;
cout <<"For "<<h<<" hours, the pool overflows with "<<overflow<< " liters.";}




}
 

