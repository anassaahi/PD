#include <iostream>
using namespace std;
void printStars1(int rowSize);
void printStars2(int rowSize);
main(){
    int rowSize;
    cout <<"Enter desired number of rows: ";
    cin >> rowSize;
   
    printStars1(rowSize);
    printStars2(rowSize);
}
void printStars1(int rowSize){
    int rows = rowSize/2;

    for (int i = 1; i <= rows; i++) {
     
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout <<endl;
    }
}
void printStars2(int rowSize){ 
    int rows = rowSize/2;   
   for (int i = 1; i <= rows; i++) {
    
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        for (int k = i; k <= rows; k++) {
            cout << "*";
        }

        cout <<endl;
    }

}