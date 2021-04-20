/*
Convert regular time to military time.
*/

#include<iostream>

using namespace std;
 
void convert_military(string time)
{
    int hour1 = (int)time[0] - '0';  // first digit of input
    int hour2 = (int)time[1] - '0';  // second digit of input
    if (hour2 == 10)  // checks if second digit was ':' which was converted to 10
    	hour2 = 0;  // if so converts it to 0
    int hours = (hour1 % 10 + hour2 * 10);  // takes modulo and multiplies second digit to convert to 24h

    // Checks if the first character is "A" or "a" for AM
    if (time[5] == 'A' || time[6] == 'A' || time[5] == 'a' || time[6] == 'a')
    {
        if (hours == 12 || hours == 21)  // matches if it is 12 AM to change it to 00 hours
        {
            cout << "00";
            for (int i=2; i <= 7; i++)  // 7 is the maximum possible digits in the input, ignores AM/PM and ':'
            	if (time[i] != 'A' && time[i] != 'M' && time[i] != 'a' && time[i] != 'm' && time[i] != ':')
                	cout << time[i];  // keeps printing the remaining values to format time in 24h
        }
        else
        {
        	if (hour2 == 0)  // adds a 0 in front of single digit hours like 1:10 AM
        		cout << 0;
            for (int i=0; i <= 7; i++)
            	if (time[i] != 'A' && time[i] != 'M' && time[i] != 'a' && time[i] != 'm' && time[i] != ':')
	                cout << time[i];
        }
    }
 
    // If the first character is "P" or "p" for PM
    else
    {
        if (hours == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
            	if (time[i] != 'P' && time[i] != 'M' && time[i] != 'p' && time[i] != 'm' && time[i] != ':')
	                cout << time[i];
        }
        else
        {
        	hours = hours + 12;
        	cout << hours;
            for (int i=2; i <= 7; i++)
            	if (time[i] != 'P' && time[i] != 'M' && time[i] != 'p' && time[i] != 'm' && time[i] != ':')
                	cout << time[i];
        }
    }
}

// Main function that calls the convert_military with the received input
int main()
{
    string time;
    cout << "Enter the time in format HH:MM AM/PM: ";
    while(getline(cin, time)){  // using getline to read the whole line with values of multiple dataypes
   	 cout << "Corresponding military time is ";
   	 convert_military(time);
   	 cout << "hours";
   	 cout << "\n";  // adds new line to the end to avoid esc characters at the end
   	 return 0;
    }
}
