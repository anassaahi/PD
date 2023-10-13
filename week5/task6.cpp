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