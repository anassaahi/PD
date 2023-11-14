#include<iostream>
using namespace std;
main(){
    string name;
    cout <<"Enter a String: ";
    cin >>name;
    int count = 0;
    for(int i = 0;name[i] != '\0';i++){
        count++;
    }
    if (count%2 == 0){
        cout <<"1";
        }
    else{
        cout<<0;
    }
}
