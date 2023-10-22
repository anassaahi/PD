#include <iostream>
using namespace std;
int triangle(int num);
int main()
{int num;
cout <<"Enter number of triangle: ";
cin>> num;
triangle(num);
}
int triangle(int num){
    int sum = 0;
    for (int x = 1;x <=num;x++){
        sum = sum +x;

    }
    cout<<"Dots in the Triangle: "<<sum;
}
    

