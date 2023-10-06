#include <iostream>
#include <windows.h>
using namespace std;
string calculatetime(int hours, int days, int workers,int totaltime);
main(){
    cout << "Enter the needed hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the days that the firms has: ";
    int days;
    cin >> days;
    cout << "Enter the number of all workers: ";
    int workers;
    cin>> workers;
    int timefirmhave;
    timefirmhave = (days*workers*10);
    int training;
    training = timefirmhave*0.1;
    int totaltime;
    totaltime = timefirmhave-training;
    string result;
    result = calculatetime(hours, days, workers, totaltime);
    cout <<result;


}
string calculatetime(int hours, int days, int workers,int totaltime)
{
    if (totaltime >= hours)
    {totaltime = totaltime - hours;
    return "Yes!"+ to_string(totaltime) +" hours left."; 

    }
    if (totaltime < hours)
    {totaltime = hours-totaltime;
    return "Not enough time! " +to_string(totaltime)+ " hours needed.";
    }
}