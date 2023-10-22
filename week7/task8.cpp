#include<iostream>
#include<iomanip>
using namespace std;

main(){
    int count;
    float minibustons = 0;
    float trucktons = 0;
    float traintons = 0;
    float totaltons;
    float weight;
    float minibusPercent;
    float truckPercent;
    float trainPercent; 
    float price = 0;
    float avgPrice;
    
    cout << "Enter the count of cargo for transportation: ";
    cin  >> count;

    for (int i=1;i<=count;i++){
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin  >> weight;
        if(weight<=3){
            minibustons += weight;
            price += (weight*200);
        }else if(weight <= 11){
            trucktons +=weight;
            price += (weight*175);
        }else if(weight>11){
            traintons += weight;
            price += (weight*120);
        }
    }
    totaltons = minibustons + traintons + trucktons;
    avgPrice = price /totaltons;
    minibusPercent = (minibustons*100)/totaltons;
    truckPercent = (trucktons*100)/totaltons;
    trainPercent = (traintons*100)/totaltons;

    cout << fixed << setprecision(2);
    cout << avgPrice << "\n";
    cout << minibusPercent << "%\n";
    cout << truckPercent << "%\n";
    cout << trainPercent << "%\n";
}