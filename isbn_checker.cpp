/*
Check if the entered number passes isbn (International Standard Book Numbers) check.
*/

#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int toDigit(char ch){
  return ch - '0'; // ascii values are subtracted
}

int isbn_check(string input)
{
	int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;  // initiates all integers
	d0 = toDigit(input[0]);
	d1 = toDigit(input[1]);
	d2 = toDigit(input[2]);
	d3 = toDigit(input[3]);
	d4 = toDigit(input[4]);
	d5 = toDigit(input[5]);
	d6 = toDigit(input[6]);
	d7 = toDigit(input[7]);
	d8 = toDigit(input[8]);
	d9 = toDigit(input[9]);
	d10 = toDigit(input[10]);
	d11 = toDigit(input[11]);
	d12 = toDigit(input[12]);
	// check sum formula
	int output = 10 - (d0 + d1 * 3 + d2 + d3 * 3 + d4 + d5 * 3 + d6 + d7 * 3 + d8 + d9 * 3 + d10 + d11 * 3) % 10;
	if (output == 10) // checks if output is 10
		output = 0; // if so replaces with 0
	return output;
}

int main()
{
	string input; // initiates a string variable input
	int result; // initates an integer variable result
	ifstream isbn_info("isbn.txt"); // reads file info and saves it to isbn_info
	while (getline (isbn_info, input)) // assigns each line of file to input
	{
		result = isbn_check(input); // calls the isbn_check function with each line
		cout << result; // prints the returned value
		cout << "\n"; // avoids % at the end
	}
}
