#include <iostream>
#include <cmath>
using namespace std;
void minimum(float number1, float number2);
main(){
    cout << "Enter the base number: ";
    float number1;
    cin >> number1;
    cout << "Enter the exponent: ";
    float number2;
    cin >> number2;
    minimum(number1, number2);
    }
    void minimum(float number1, float number2)
    {
    cout <<number1<<" raised to the power "<<number2<<" is: "<<pow(number1, number2);
}