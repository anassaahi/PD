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
