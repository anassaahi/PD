#include <iostream>
#include <string>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main() {
    int examHour, examMinute, studentHour, studentMinute;
    
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    
    string final = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << final;

    return 0;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    string status;
    int examTime = examHour * 60 + examMinute;
    int studentTime = studentHour * 60 + studentMinute;
    int difference = examTime - studentTime;

    if (examTime < studentTime) {
        status = "Late";
        int hours = abs(difference) / 60;
        int minutes = abs(difference) % 60;

        string minutesString = "";
            if (minutes < 10 && hours > 0) {
            minutesString = "0" + to_string(minutes);
            return status + "\n" + to_string(hours) + ":" + minutesString + " hours after the start";
            } if (minutes > 10 && hours > 0){
                return status + "\n" + to_string(hours) + ":" + to_string(minutes) + " hours after the start";}
            if (hours == 0){
            return status + "\n" + to_string(minutes)+ " minutes after the start";
            }}
    if (difference <= 30) {
        status = "On time";
        int hours = abs(difference) / 60;
        int minutes = abs(difference) % 60;
        if (difference == 0){
        return status+"/n";}
            else {
            return status + "\n" + to_string(minutes) + " minutes before the start";
            }
        }
    else {
        status = "Early";
        int hours = difference / 60;
        int minutes = difference % 60;

        string minutesString = "";
        if (minutes < 10) {
            minutesString = "0" + to_string(minutes);
        } else {
            minutesString = to_string(minutes);
        }

        if (hours > 0 && minutes != 0) {
            return status + "\n" + to_string(hours) + ":" + minutesString + " hours before the start";
        }if (hours > 0 && minutes == 0){
            return status + "\n" + to_string(hours) + ":" +to_string(minutes) + " hours before the start";
        }
         else {
            return status + "\n" + minutesString + " minutes before the start";
        }
    }
}

