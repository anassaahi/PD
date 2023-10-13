//game/
#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = { 0, 0 };
    SMALL_RECT rect = { x, y, x, y };
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void printenemy();
void eraseenemy();
void printenemy2();
void eraseenemy2();
void printenemy3();
void eraseenemy3();
void eraseplayer();
void printplayer();
void moveplayerleft();
void moveplayerright();
void moveplayerup();
void moveplayerdown();
void moveenemy();
void moveenemy2();
void moveenemy3();
void printmaze();
int eX = 2, eY = 2;
int eX2 = 3, eY2 = 3;
int eX3 = 4, eY3 = 4;

int pX = 20, pY = 20;

int main() {
    system("cls");
    printmaze();
    printenemy();
    printenemy2();
    printenemy3();
    printplayer();

    while (true) {
        if (GetAsyncKeyState(VK_LEFT)) {
            moveplayerleft();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            moveplayerright();
        }
        if (GetAsyncKeyState(VK_UP)) {
            moveplayerup();
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            moveplayerdown();
        }
        moveenemy();
        moveenemy2();
        moveenemy3();

        Sleep(200);
    }

    return 0;
}

void printmaze() {
    cout <<"####################################################################################"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;            
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"####################################################################################"<<endl;
}

void printenemy() {
    gotoxy(eX, eY);
    cout <<" /oo\\  ";
    gotoxy(eX, eY+1);
    cout <<"/|  |\\ ";
    gotoxy(eX, eY+2);
    cout <<" /  \\  ";
   
}

void printenemy2() {
    gotoxy(eX2, eY2);
    cout <<" /oo\\  ";
    gotoxy(eX2, eY2+1);
    cout <<"/|  |\\ ";
    gotoxy(eX2, eY2+2);
    cout <<" /  \\  ";
                    
}

void printenemy3() {
    gotoxy(eX3, eY3);
    cout <<" /oo\\  ";
    gotoxy(eX3, eY3+1);
    cout <<"/|  |\\ ";
    gotoxy(eX3, eY3+2);
    cout <<" /  \\  ";   
    
}

void eraseenemy() {
    gotoxy(eX, eY);
    cout <<"        ";
    gotoxy(eX, eY+1);
    cout <<"        ";
    gotoxy(eX, eY+2);
    cout <<"        ";
    
} 

void eraseenemy2() {
    gotoxy(eX2, eY2);
    cout <<"        ";
    gotoxy(eX2, eY2+1);
    cout <<"        ";
    gotoxy(eX2, eY2+2);
    cout <<"        ";
   
}

void eraseenemy3() {
    gotoxy(eX3, eY3);
    cout <<"        ";
    gotoxy(eX3, eY3+1);
    cout <<"        ";
    gotoxy(eX3, eY3+2);
    cout <<"        ";

}

void moveenemy() {
    eraseenemy();
    eX = eX + 1;
    if (eX == 60) {
        eX = 2;
    }
    printenemy();
}

void moveenemy2() {
    eraseenemy2();
    eY2 = eY2 + 1;
    if (eY2 == 20) {
        eY2 = 2;
    }
    printenemy2();
}

void moveenemy3() {
    eraseenemy3();
    eX3 = eX3 + 1;
    eY3 = eY3 + 1;
    if (eX3 == 60) {
        eX3 = 2;
    }
    if (eY3 == 20) {
        eY3 = 2;
    }
    printenemy3();
}

void eraseplayer() {
    gotoxy(pX,pY);
    cout <<"              ";
    gotoxy(pX,pY+1);
    cout <<"              ";
    gotoxy(pX,pY+2);
    cout <<"              ";
    gotoxy(pX,pY+3);
    cout <<"              ";
    gotoxy(pX,pY+4);
    cout <<"              ";
}

void printplayer() {
    gotoxy(pX,pY);
    cout <<"      o       ";
    gotoxy(pX,pY+1);
    cout <<"     | |      ";
    gotoxy(pX,pY+2);
    cout <<" ___(   )___  ";
    gotoxy(pX,pY+3);
    cout <<"/~~~~~~~~~~~\\";
    gotoxy(pX,pY+4);
    cout <<"\\0.0.0.0.0.0/";       
}

void moveplayerleft() {
    if (getCharAtxy(pX - 1, pY) == ' ') {
        eraseplayer();
        pX = pX - 1;
        printplayer();
    }
}

void moveplayerright() {
    if (getCharAtxy(pX + 14, pY) == ' ') {
        eraseplayer();
        pX = pX + 1;
        printplayer();
    }
}

void moveplayerup() {
    if (getCharAtxy(pX, pY-1) == ' ') {
        eraseplayer();
        pY = pY - 1;
        printplayer();
    }
}

void moveplayerdown() {
    if (getCharAtxy(pX, pY+5) == ' ') {
        eraseplayer();
        pY = pY + 1;
        printplayer();
    }
}
//task2/
#include <iostream>
#include <windows.h>
using namespace std;
string volume(float heigth, float length,float width, float vol, string unit);
main(){
    cout << "Enter the length of the pyramid (in meters): ";
    float length;
    cin  >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    float width;
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    float heigth;
    cin >> heigth;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometrs): ";
    string unit;
    cin >> unit;
    float vol;
    vol = (length*width*heigth)/3;
 

    string result;
    result = volume(heigth,length,width,vol,unit);
    cout <<result;
    }
string volume(float heigth, float length,float width, float vol, string unit)
{
    if (unit == "meters")
    { 
    return "The volume of the pyramid is: "+ to_string(vol)+" cubic meters";
    }
    if (unit == "millimeters")
    {
        vol = vol*1000000000;
        return "The volume of the pyramid is: "+to_string(vol)+" cubic millimeters";
        
    }
    if (unit == "centimeters")
    {
        vol = vol*1000000;
        return "The volume of the pyramid is: "+to_string(vol)+" cubic centimeters";
        
        }
    if (unit == "kilometers")
	{vol = vol/1000000000;
    return "The volume of the pyramid is: "+to_string(vol)+" cubic kilometers";
    
       }
}
//task3/
#include <iostream>
#include <windows.h>
using namespace std;
string final(char typecode, int price, int tax, int finalprice);
main()
{
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    char typecode;
    cin >> typecode;
    cout << "Enter the price of the vehicle: $";
    int price;
    cin >> price;
    int tax;
    int finalprice;
    string result;
    result = final(typecode, price, tax, finalprice);
    cout <<result;	

}
string final(char typecode, int price, int tax, int finalprice)
{
    if (typecode == 'M')
    {tax = price* 0.06;
    finalprice = price+tax;
    return "The final price of a vehicle of type M after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'E')
    {tax = price*0.08;
    finalprice = price+tax;
    return "The final price of a vehicle of type E after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'S')
    {tax = price*0.10;
    finalprice = price+tax;
    return "The final price of a vehicle of type S after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'V')
    {tax = price*0.12;
    finalprice = price+tax;
    return "The final price of a vehicle of type V after adding the tax is $"+to_string(finalprice);
    }
    if (typecode == 'T')
    {tax = price*0.15;
    finalprice = price+tax;
    return "The final price of a vehicle of type T after adding the tax is $"+to_string(finalprice);
    }
}
//task4/
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
//task5/
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
string option1(int op, string name,string bussinessname,string email,int phoneno,string continu,string hire);
string option2(string name,string bussinessname,string email,int phoneno,string hire,string continu);
string option3(string hire);
int op;
string name;
string bussinessname;
string email;
int phoneno;
string continu;
string hire;


main() 
{
    cout <<"               #####################################################################"<<endl;
    cout <<"               #    ######        ######         #####       ##           ##       #"<<endl;
    cout <<"               #   #       #      #     #      ##      ##    ##           ##       #"<<endl;        
    cout <<"               #  #               #     #    ##         ##   ##    ##     ##       #"<<endl;
    cout <<"               #  #     ####      ######     ##         ##   ##  #    #   ##       #"<<endl;
    cout <<"               #   #       ##     ###          ##      ##    ## #       # ##       #"<<endl;
    cout <<"               #     ######       #   ###         #####      ###         ###       #"<<endl;
    cout <<"               #####################################################################"<<endl;
    cout <<"                                                                                               "<<endl;
    cout <<"Hi! Welcome to 'GROW'. GROW is a bussiness application meant to serve the bussiness of our customers"<<endl;
    cout <<"Following are the options available in our application: "<<endl;
    cout <<"                                                                            "<<endl;
    cout <<"OPTION 1:(IF YOU WANT TO REGISTER AS A BUSSINESS-MAN )"<<endl;
    cout <<"                                                                               "<<endl;
    cout <<"OPTION 2:(IF YOU ARE LOOKING FOR A JOB)"<<endl;
    cout <<"                                                                                    "<<endl;
    cout <<"OPTION 3:(IF YOU JUST WANT TO FIND OTHER BUSSINESS'S TO WORK WITH)"<<endl;
    cout <<"                                                                            "<<endl;
    int opp;
    cout << "Please select the option number:";
    cin >> op;
    string name;
    string continu;
    string bussinessname;
    string email;
    int phoneno;
    string hire;
   
    while(true)
{
    if (opp == 1)
    {cout <<option1(op,name,bussinessname,email,phoneno,continu);}
    if (opp == 2)
    {cout <<option2(name,bussinessname,email,phoneno,hire,continu);}
    if (opp == 3)
    {cout <<option3(op,name,bussinessname,email,phoneno,continu,hire);}
  } 

}
    string option1(int op, string name,string bussinessname,string email,int phoneno,string continu,string hire)
    
    {cout <<"You have successfully selected the option 1. Please enter your info below to REGISTER! "<<endl;
    
    cout <<"Enter your name: ";
    cin >> name;

    cout <<"Enter your bussiness name: ";
    cin >> bussinessnamee;
    
    cout <<"Enter your email address: ";
    cin >> emaill;
    
    cout <<"Enter your Phone no: ";
    cin >> phonenoo;

    cout <<"YOU HAVE REGISTERED SUCCESSFULLY!! ";
    cout << "Following is your info:"<<endl;
    cout <<"NAME\t\tBUSSINESS-NAME\tEmail\t\tPhone number"<<endl;
    cout <<name<<"\t\t"<<bussinessname<<"\t\t"<<email<<"\t"<<phoneno<<endl;
    
    cout << "Do you want to hire?(yes//no): ";
    cin >> hire;
  
    
    cout <<"Do you want to continue(yes//no): ";
    cin>> continu;
        if (continu == "yes")
            cout <<main();
                else{
                    terminate;
                                }}
     
    string option2(string name,string bussinessname,string email,int phoneno,string hire,string continu)
    {cout <<"You have successfully selected the option 2. Following are bussiness-man who are hiring: "<<endl;
    cout <<"NAME\t\tBUSSINESS-NAME\tEmail\t\t\t\tPhone number"<<endl;
    cout <<"                                                                 "<<endl;
    cout <<"anas\t\tchicken farm\tanasfaiz@gmail.com\t\t098765456"<<endl;
    cout <<"faiz\t\tmy best cars\tfaizfaiz@gmail.com\t\t0987653442"<<endl;
    cout <<"saahi\t\tmotorworkes\tssssaahi@gmail.com\t\t09876545634"<<endl;
    if (hire == "yes")
    {cout <<name<<"\t\t"<<businessname<<"\t"<<email<<"\t\t"<<phoneno<<endl;}
    
    cout <<"Do you want to continue(yes//no): ";
    cin>> continu;
        if (continu == "yes")
            cout <<main();
                else{
                    terminate;
                                }}
    string option3(int op, string name,string bussinessname,string email,int phoneno,string continu,string hire)
    {cout <<"You have successfully selected the option 3. Following is the info of bussiness-man who have already registered: "<<endl;
    cout <<"NAME\t\tBUSSINESS-NAME\tEmail\t\t\t\tPhone number"<<endl;
    cout <<"                                                                 "<<endl;
    cout <<"anas\t\tchicken farm\tanasfaiz@gmail.com\t\t098765456"<<endl;
    cout <<"faiz\t\tmy best cars\tfaizfaiz@gmail.com\t\t0987653442"<<endl;
    cout <<"saahi\t\tmotorworkes\tssssaahi@gmail.com\t\t09876545634"<<endl;
    if (hire == "yes")
    {cout <<name<<"\t\t"<<businessname<<"\t"<<email<<"\t\t"<<phoneno<<endl;}
    
    cout <<"Do you want to continue(yes//no): ";
    cin>> continu;
        if (continu == "yes")
            cout <<main();
                else{
                    terminate;
                                }}
    //task6/
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{COORD coordinates; coordinates.X = x;
coordinates. Y = y;
SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy (short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize. Y = 1;
return ReadConsoleOutput (GetStdHandle (STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void printenemy(int eX, int eY);
void eraseenemy(int eX, int eY);
void printenemy2(int eX2, int eY2);
void eraseenemy2(int ex2, int eY2);
void printenemy3(int ex3, int eY3);
void eraseenemy3(int ex3, int eY3);
void eraseplayer(int pX, int pY);
void printplayer(int pX, int pY);
void moveplayerleft(int pX, int pY);
void moveplayerright(int pX, int pY);
void moveplayerup(int pX, int pY);
void moveplayerdown(int pX, int pY);
void moveenemy(int ex, int eY);
void moveenemy2(int ex2, int eY2);
void moveenemy3(int ex3, int eY3);
void printmaze();
int eX = 2, eY = 2;
int eX2 = 3, eY2 = 3;
int eX3 = 4, eY3 = 4;

int pX = 20, pY = 20;
main(){
    system("cls");
    printmaze();
    printenemy(eX, eY);
    printenemy2(eX2, eY2);
    printenemy3(eX3, eY3);
    printplayer(pX,pY);

    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveplayerleft(pX, pY);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveplayerright(pX, pY);
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveplayerup(pX, pY);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveplayerdown(pX, pY);
        }
        moveenemy(eX, eY);
        moveenemy2(eX2, eY2);
        moveenemy3(eX3, eY3);
    
        Sleep(200);
    }
}
void printmaze()
{
    cout <<"####################################################################################"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;            
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"#                                                                                  #"<<endl;
    cout <<"####################################################################################"<<endl;
    }
void printenemy(int eX, int eY)
    {
        gotoxy(eX, eY);
        cout <<"   **    ";
        gotoxy(eX, eY+1);
        cout <<" ******  ";
        gotoxy(eX, eY+2);
        cout <<" ******  ";
        gotoxy(eX, eY+3);
        cout <<"   **    ";
        }
void printenemy2(int eX2, int eY2)
    {
        gotoxy(eX2, eY2);
        cout <<"  ****   ";
        gotoxy(eX2, eY2+1);
        cout <<" ******  ";
        gotoxy(eX2, eY2+2);
        cout <<" ******  ";
        gotoxy(eX2, eY2+3);
        cout <<"  ****   ";
        }
void printenemy3(int eX3, int eY3)
    {
        gotoxy(eX3, eY3);
        cout <<"   **    ";
        gotoxy(eX3, eY3+1);
        cout <<" ******  ";
        gotoxy(eX3, eY3+2);
        cout <<" ******  ";
        gotoxy(eX3, eY3+3);
        cout <<"   **    ";
        }
void eraseenemy(int eX, int eY)
    {
        gotoxy(eX, eY);
        cout <<"         ";
        gotoxy(eX, eY+1);
        cout <<"         ";
        gotoxy(eX, eY+2);
        cout <<"         ";
        gotoxy(eX, eY+3);
        cout <<"         ";
        } 
void eraseenemy2(int eX2, int eY2)
    {
        gotoxy(eX2, eY2);
        cout <<"         ";
        gotoxy(eX2, eY2+1);
        cout <<"         ";
        gotoxy(eX2, eY2+2);
        cout <<"         ";
        gotoxy(eX2, eY2+3);
        cout <<"         ";
        }
void eraseenemy3(int eX3, int eY3)
    {
        gotoxy(eX3, eY3);
        cout <<"         ";
        gotoxy(eX3, eY3+1);
        cout <<"         ";
        gotoxy(eX3, eY3+2);
        cout <<"         ";
        gotoxy(eX3, eY3+3);
        cout <<"         ";
    }
    
void moveenemy(int eX, int eY)
    {
        eraseenemy(eX,eY);
        eX = eX + 1;
        if ( eX == 60)
        { 
            eX = 2;
        }
        printenemy(eX,eY);
    }
void moveenemy2(int eX2, int eY2)
    {
        eraseenemy2(eX2,eY2);
        eY2 = eY2 + 1;
        if ( eY2 == 20)
        { 
            eY2 = 2;
        }
        printenemy2(eX2,eY2);
    }
void moveenemy3(int eX3, int eY3)
    {
        eraseenemy3(eX3,eY3);
        eX3 = eX3 + 1;
        eY3 = eY3 + 1;
        if ( eX3 == 60)
        { 
            eX3 = 2;
        }
        if (eY3 == 20)
        {
            eY3 = 2;
        }
        printenemy3(eX3, eY3);
    }
void eraseplayer(int pX, int pY)
    {
        gotoxy(pX,pY);
        cout <<"                ";
        gotoxy(pX,pY+1);
        cout <<"                ";
        gotoxy(pX,pY+2);
        cout <<"                ";
        gotoxy(pX,pY+3);
        cout <<"                ";
        gotoxy(pX,pY+4);
        cout <<"                ";
     }
void printplayer(int pX, int pY)
    {
        gotoxy(pX,pY);
        cout <<"     ___      ";
        gotoxy(pX,pY+1);
        cout <<" /    |    \\ ";
        gotoxy(pX,pY+2);
        cout <<"|-----|-----| ";
        gotoxy(pX,pY+3);
        cout <<" \\    |    / ";
        gotoxy(pX,pY+4);
        cout <<"     _|_     ";       
    }
void moveplayerleft(int pX, int pY)
    {
        if (getCharAtxy(pX - 1, pY) == ' ')
        {
            eraseplayer(pX,pY);
            pX = pX - 1;
            printplayer(pX,pY);
        }
    }
void moveplayerright(int pX, int pY)
    {
        if (getCharAtxy(pX + 16, pY) == ' ')
        {
            eraseplayer(pX,pY);
            pX = pX + 1;
            printplayer(pX,pY);
    }}
void moveplayerup(int pX, int pY)
    {
        if (getCharAtxy(pX, pY-1) == ' ')
        {
            eraseplayer(pX,pY);
            pY = pY - 1;
            printplayer(pX,pY);
    }}
void moveplayerdown(int pX, int pY)
    {
        if (getCharAtxy(pX, pY+5) == ' ')
        {
            eraseplayer(pX,pY);
            pY = pY + 1;
            printplayer(pX,pY);
    }}