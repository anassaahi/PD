#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
string calculateHotelPrice(string month, int numberOfstays);
string apartment(string month, int numberOfstays);
main(){
    string month;
    cout <<"Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    int numberOfstays;
    cout << "Enter the number of stays: ";
    cin>> numberOfstays;
    cout <<apartment(month, numberOfstays)<<endl;
    cout <<calculateHotelPrice(month, numberOfstays);
  


}
string calculateHotelPrice(string month, int numberOfstays)
{
    float srate = 0;
    if ((month == "May"||month == "October")&& (numberOfstays > 14 ))
    {
        srate = (50-(50*30/100))*(numberOfstays);
        
    }  
    else if ((month == "June"||month == "September") && (numberOfstays > 14))
    {
        srate = (75.20-(75.20*20/100))*(numberOfstays);
    }   
    else if ((month == "May"||month == "October")&& (numberOfstays > 7 ))
    {
        srate = (50-(50*5/100))*(numberOfstays);
        
    }   
     else if (month == "May"||month == "October")
    {
        srate = 50*numberOfstays;
    }  
    else if (month == "June"||month == "September")
    {
        srate = 75.20*numberOfstays;
    }   
    else if (month == "July"||month == "August")
    {
        srate = 76*numberOfstays;
    }     

    return  "Studio: " + to_string(srate)+"$.";
}
string apartment(string month, int numberOfstays)
{
    float arate = 0;
    if ((month == "May"||month == "October")&&(numberOfstays > 14))
    {
        arate =(65-(65*10/100))*(numberOfstays);
    }
    else if ((month == "June"||month == "September")&&(numberOfstays > 14))
    {
        arate = (68.70-(68.70*10/100))*(numberOfstays);
    }
    else if ((month == "July"||month == "August")&&(numberOfstays > 14))
    {
        arate = (77-(77*10/100))*(numberOfstays);
    }
    else if (month == "May"||month == "October")
    {
        arate = 65*numberOfstays;
    }
    else if (month == "June"||month == "September")
    {
            arate = 68.70*numberOfstays;
    }
    else if (month == "July"||month == "August")
    {
        arate = 77*numberOfstays;
    }
    return "Apartment: " + to_string(arate) + "$.";
    }
