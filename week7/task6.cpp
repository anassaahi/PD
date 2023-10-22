#include<iostream>
using namespace std;
int primorial(int num);
bool checkPrime(int num);
main(){
int number;
cout << "Enter Number: ";
cin>> number;
cout << primorial(number);
}

int primorial(int num){
    int result = 1;
    int numCount = 0;
    int i=2;
    while(true){
        if(checkPrime(i)){
            result *= i;
            numCount++;
        }
        if(numCount >= num)
            break;
        i++;
    }
    return result;
}


bool checkPrime(int num){
    bool result = true;
    for(int i=2; i<num;i++){
        if(num%i == 0)
            result = false;
    }
    return result;
}