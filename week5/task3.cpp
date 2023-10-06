#include <iostream>
#include <cmath>
using namespace std;
void sqr(float number1);
main(){
    cout << "Enter a number: ";
    float number1;
    cin >> number1;
  
    sqr(number1);
	}
    void sqr(float number1)
    {
    cout <<"The square root of "<<number1<<" is: "<<sqrt(number1);}
