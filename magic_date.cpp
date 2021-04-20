/*
Check if entered date is a magic date.
Magic Date: month * date = year eg: 02/03/06
*/

#include <iostream>
#include <sstream>

using namespace std;

void isMagicDate(string(date))
{
	char delimiter  = '/';
	stringstream str(date);
	string month, day, year;
	getline(str, month, delimiter);
	getline(str, day, delimiter);
	getline(str, year);
	
	int month_ = stoi(month);
	int day_ = stoi(day);
	int year_ = stoi(year);
	cout << "month is " << month_ << "\n" << "day is " << day_ << "\n" << "year is " << year_ << "\n";
	
	int magic = day_*month_;
	if( year_ == magic){
        cout << date << " is a magic date \n";
     }
     else{
        cout << date << " is not a magic date \n";
	 }
}

int main()
{	 
	string date;
	cout << "Enter date in format mm/dd/yy: ";
	while (getline(cin,date)){
		isMagicDate(date);
	return 0;
	}
}
