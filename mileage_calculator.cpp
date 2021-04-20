#include <iostream>

using namespace std; //specifies stdout globally

int main()
{
	double gallons, miles; //set datatype as double
	cout << "Enter number of gallons the car can hold: ";
	cin >> gallons;
	cout << "Enter number of miles that can be driven on a full tank: ";
	cin >> miles;
	cout << "Number of miles that can be driven on a gallon of gas is " << miles/gallons << endl; //dividing miles by gallons will give the range per gallon
	return 0;
}
