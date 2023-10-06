#include <iostream>
#include <string>

using namespace std;

string nototext(int number);

int main() {
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;

    string textRepresentation = nototext(number);
    {
        cout << textRepresentation << endl;
    } 
return 0;
}
string nototext(int number)
 {
    const string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (number >= 1 && number <= 99) {
        if (number < 20) {
            return units[number];
        }
        if (number >= 20) {
            int tensdigit;
            tensdigit = number / 10;
            int onesdigit;
            onesdigit = number % 10;
            return tens[tensdigit] + units[onesdigit];
        }
    }
    
}