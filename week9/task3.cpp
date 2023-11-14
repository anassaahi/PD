#include<iostream>
using namespace std;
bool identical(string numbers[], int size);

main(){
int size;
cout <<"Enter the size of Array: ";
cin >>size;
string numbers[size];
cout <<identical(numbers, size);


}
bool identical(string numbers[], int size){
    int result = 1;
for(int i = 0;i < size;i++){
    cout<<"Enter Element "<<i+1<<": ";
    cin >> numbers[i];
    if(numbers[i] != numbers[0])
    {
       result = 0;
    }
    }
    if (result == 1){
        return true;
    }
    else {
        return false;
    }
}
