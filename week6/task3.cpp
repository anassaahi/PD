#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main(){
    int day;
    cout <<"Enter the day of birth: ";
    cin >> day;
    string month;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout <<"Zodiac Sign: "<<findZodiacSign(day, month);
}
string findZodiacSign(int day, string month)
{
    if ((month =="March" && day >= 21 && day <=31)||(month == "April" && day >=1 && day<=21 ))
    {return "Aries";}
    if ((month =="April" && day >= 20 && day <=30)||(month == "May" && day >=1 && day<=20 ))
    {return "Taurus";}
    if ((month =="May" && day >= 21 && day <=30)||(month == "June" && day >=1 && day<=20 ))
    {return "Gemini";}
    if ((month =="June" && day >= 21 && day <=30)||(month == "July" && day >=1 && day<=22 ))
    {return "Cancer";}
    if ((month =="July" && day >= 23 && day <=31)||(month == "August" && day >=1 && day<=22 ))
    {return "Leo";}
    if ((month =="August" && day >= 23 && day <=31)||(month == "September" && day >=1 && day<=22 ))
    {return "Virgo";}
    if ((month =="September" && day >= 23 && day <=30)||(month == "October" && day >=1 && day<=22 ))
    {return "Libra";}
    if ((month =="October" && day >= 23 && day <=31)||(month == "November" && day >=1 && day<=21 ))
    {return "Scorpio";}
    if ((month =="November" && day >= 22 && day <=30)||(month == "December" && day >=1 && day<=21 ))
    {return "Sagittarius";}
    if ((month =="December" && day >= 22 && day <=31)||(month == "January" && day >=1 && day<=19 ))
    {return "Capricon";}
    if ((month =="January" && day >= 20 && day <=31)||(month == "February" && day >=1 && day<=18 ))
    {return "Aquarius";}
    if ((month =="February" && day >= 19 && day <=28)||(month == "March" && day >=1 && day<=20 ))
    {return "Pisces";}

}