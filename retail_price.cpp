/*
Calculate retail price using markup percentage and whole sale price.
*/

#include <iostream>
#include <string>

using namespace std; //specifies stdout globally

int main()
{
	string item; //sets item as datatype: string
	double cost; //set cost as datatype: double
	double percentage; //set percentage as datatype: double
	cout << "Enter item description: ";
	cin >> item;
	cout << "You entered " << item;
	cout << "\n";
	cout << "Enter item wholesale cost: ";
	cin >> cost;
	cout << "You entered " << cost;
	cout << "\n";
	cout << "Enter item markup percentage: ";
	cin >> percentage;
	cout << "You entered " << percentage;
	cout << "\n";
	double retail = cost * (percentage/100) + cost; //calculates the retail price
	cout << "Retail price for " << item << " is " << retail;
	return 0;
}
