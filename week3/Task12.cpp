#include <iostream>
using namespace std;
int main(){
	cout << "Number of square meters you can paint: ";
	int meters;
	cin >> meters;
	cout << "Width of the single wall (in meters): ";
	int width;
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	int height;
	cin >> height;
	int multiply;
	multiply = width*height;
	int youcan;
	youcan = meters/multiply;
	cout << "Number of walls you can paint: "<<youcan;
	
	

}