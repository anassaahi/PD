#include <iostream>
using namespace std;

main(){
    int days;
    cout <<"Enter Number of days you visited Hospital: ";
    cin>> days;
    int treated = 0;
    int untreated = 0;
    int doctors = 7;
    for(int days2 = 1;days2 <= days; days2++){
        int pvisited;
        cout <<"Number of patients who visited hospital on Day "<<days2<<": ";
        cin >>pvisited;
        if (days2%3==0){
            if(untreated>treated){
                doctors = doctors+1;
            }
        }
        if(pvisited<=doctors){
            treated=treated+pvisited;
        }
    else{
        treated += doctors;
        untreated += pvisited-doctors;
    }
    }
    cout <<"Treated Patients: "<<treated<<endl;
    cout <<"Untreated Patients: "<<untreated;
}