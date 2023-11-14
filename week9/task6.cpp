#include<iostream>
using namespace std;
int coloringtime(string numbers[], int size);

main(){
int size;
cout <<"Enter the size of Array: ";
cin >>size;
string numbers[size];
for(int i = 0;i < size;i++){
    cout<<"Enter Element "<<i+1<<": ";
    cin >> numbers[i];}
int result = coloringtime(numbers,size);
cout<< "Time to color: " << result << " seconds";

}




int coloringtime(string numbers[], int size){
    int change = 1;
    int color = 2;
    int total = 0;
    total += color;
    for(int i = 1;i < size;i++){
        if(numbers[i] != numbers[i-1]){
            total += change;
        }
        total += color;
    }
    return total;

    

}


