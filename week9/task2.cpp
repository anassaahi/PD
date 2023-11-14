#include<iostream>
using namespace std;
string containsSeven(int numbers[], int size);
bool exist(int numbers[]);
main(){
int size;
cout <<"Enter the size of Array: ";
cin >>size;
int numbers[size];
for(int i = 0;i < size;i++){
    cout<<"Enter Element "<<i+1<<": ";
    cin >> numbers[i];}
cout <<containsSeven(numbers, size);


}
string containsSeven(int numbers[], int size){
    int result = 0;
    int num;
    for(int i = 0;i < size;i++){
    num = numbers[i];
    while(num != 0){
        int digit = num%10;
        if (digit == 7){
            result = 1;
        }
        num /= 10;
    }
    }
    if(result == 1)
    {
        return "Boom!";
    }
    else {
        return "there is no 7 in the array";
    }}
