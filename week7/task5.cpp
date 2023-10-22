#include<iostream>
using namespace std;
bool isPrime(int num);
main (){
int num;
cout <<"Enter Number: ";
cin>>num;
int result;
result = isPrime(num);
cout << result;

}
bool isPrime(int num){
    bool value = true;
    if (num%num ==0 && num/2 !=0 && num/3 != 0){
        value = true;
    }
    if (num%2 == 0 || num %3==0){
        value = false;
    }
 return value;
}