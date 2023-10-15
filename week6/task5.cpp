#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayofWeek, double quantity);
main(){
    string fruit;
    cout << "Enter the fruit name: ";
    cin >>fruit;
    string dayofWeek;
    cout <<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>> dayofWeek;
    double quantity;
    cout <<"Enter the quantity: ";
    cin >> quantity;
    float result;

    result = calculateFruitPrice(fruit,dayofWeek, quantity);
    if (dayofWeek == "Monday"||dayofWeek == "Tuesday"||dayofWeek == "Wednesday"||dayofWeek == "Thursday"||dayofWeek == "Friday"||dayofWeek == "Saturday"||dayofWeek == "Sunday"||fruit == "banana"||fruit == "apple"||fruit == "orange"||fruit == "grapefruit"||fruit == "kiwi"||fruit == "pineapple"||fruit == "grapes"){
        cout <<result;
    }
    else if (dayofWeek != "Monday"||dayofWeek != "Tuesday"||dayofWeek != "Wednesday"||dayofWeek != "Thursday"||dayofWeek != "Friday"||dayofWeek != "Saturday"||dayofWeek != "Sunday"||fruit != "banana"||fruit != "apple"||fruit != "orange"||fruit != "grapefruit"||fruit != "kiwi"||fruit != "pineapple"||fruit != "grapes"){
        cout <<"error";
}
}
float calculateFruitPrice(string fruit, string dayofWeek, double quantity)
{   float price;
    if (dayofWeek == "Monday"||dayofWeek == "Tuesday"||dayofWeek == "Wednesday"||dayofWeek == "Thursday"||dayofWeek == "Friday")
    {
        if(fruit == "banana")
        {
            price = 2.50*quantity;
            return price;
        }
        else if (fruit == "apple")
        {
            price = 1.20*quantity;
            return price;
        }
        else if(fruit == "orange")
        {
            price = 0.85*quantity;
            return price;
        }
        else if(fruit == "grapefruit")
        {
            price = 1.45*quantity;
            return price;
        }
        else if(fruit == "kiwi")
        {
            price = 2.70*quantity;
            return price;
        }
        else if(fruit == "pineapple")
        {
            price = 5.50*quantity;
            return price;
        }
        else if(fruit == "grapes")
        {
            price = 3.85*quantity;
            return price;
        }


    
    }
    if (dayofWeek == "Saturday"||dayofWeek == "Sunday")
    {
        if(fruit == "banana")
        {
            price = 2.70*quantity;
            return price;
        }
        else if (fruit == "apple")
        {
            price = 1.25*quantity;
            return price;
        }
        else if(fruit == "orange")
        {
            price = 0.90*quantity;
            return price;
        }
        else if(fruit == "grapefruit")
        {
            price = 1.60*quantity;
            return price;

        }
        else if(fruit == "kiwi")
        {
            price = 3.00*quantity;
            return price;
        }
        else if(fruit == "pineapple")
        {
            price = 5.60*quantity;
            return price;
        }
        else if(fruit == "grapes")
        {
            price = 4.20*quantity;
            return price;
        }


    }
}
