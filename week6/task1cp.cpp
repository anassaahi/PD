#include<iostream>
using namespace std;
string decideActivity(string temp,string hum );
main(){
    string temp;
    cout <<"Enter temperature (warm or cold): ";
    cin >> temp;
    string hum;
    cout <<"Enter humidity (dry or humid): ";
    cin >> hum;
    cout <<"Recommended activity: "<<decideActivity(temp,hum );
}
string decideActivity(string temp,string hum )
{string game;
    if (temp == "warm" && hum == "dry")
    {
        game ="Play tennis";
    }
    if (temp == "warm" && hum == "humid")
    {
        game ="Swim";
    }
    if (temp == "cold" && hum == "dry")
    {
        game ="Play basketball";
    }
    if (temp == "cold" && hum == "humid")
    {
        game ="Watch TV";
    }
return game;

}
