#include <iostream>
#include <string>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int homeTownWeekends);
main (){
    string yearType;
    cout <<"Enter year type: ";
    cin >> yearType;
    int holidays;
    cout <<"Enter number of holidays: ";
    cin >> holidays;
    int homeTownWeekends;
    cout<<"Enter number of weekends: ";
    cin >> homeTownWeekends;
    int result = calculateVolleyballGames(yearType, holidays, homeTownWeekends);
    cout <<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends) {
    int totalWeekends = 48;

    double count = 0;

    if (yearType == "leap") {
        count = 
        ((totalWeekends - hometownWeekends) * (3.0 / 4) + hometownWeekends + (holidays * (2.0 / 3))) * 1.15;
    } else if (yearType == "normal") {
        count = (totalWeekends - hometownWeekends) * (3.0 / 4) + hometownWeekends + (holidays * (2.0 / 3));
    }

    return int(count);
}


