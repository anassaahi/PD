#include <iostream>
using namespace std;
string findBrokenkeys(string correct, string actual);
main(){
    string correct;
    cout <<"Enter the correct phrase: ";
    getline(cin, correct);
    string actual;
    cout << "Enter what you actually typed: ";
    getline(cin, actual);
    cout << "Broken keys: " << findBrokenkeys(correct, actual);



}
string findBrokenkeys(string correct, string actual){
    string broken = "";      
    string typed = "";
    for(int i = 0;correct[i] != '\0';i++){

    if (correct[i] != actual[i] && typed.find(correct[i]) == string::npos)    //// npos --> not found
        {
            broken += correct[i];
            typed += correct[i];
        }
    }
    return broken;
        
}