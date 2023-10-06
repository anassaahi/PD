#include <iostream>
#include <cmath>
using namespace std;
void minimum(float number1, float number2);
main(){
    cout << "Enter the first number: ";
    float number1;
    cin >> number1;
    cout << "Enter the second number: ";
    float number2;
    cin >> number2;
    minimum(number1, number2);
    }
    void minimum(float number1, float number2)
    {
    cout << "The minimum of "<<number1<<" and "<<number2<<" is: "<<min(number1, number2);
}