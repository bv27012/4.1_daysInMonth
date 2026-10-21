//Calculates if a year is a leap year or not and returns the number of days in a given month.

#include <iostream>
using namespace std;

int main()
{
	int year;
	int monthnum;
	bool leapYear = false;
	
	cout << "Input a year: ";
	cin >> year;
	cout << "Input a month (in number format, 1-12): ";
	cin >> monthnum;
	cout << endl;

	//Year calculation

	if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0) 
		// For clarity: I did use AI to help me figure out what I was missing from this calculation. All expressions aside from year % 100 != 0 is from my brain.
	{
		leapYear = true;
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is not a leap year." << endl;
	}

	//Month calculation
	switch (monthnum)
	{
	case 1:
		cout << "January has 31 days." << endl;
		break;
	case 2:
		if (leapYear == true)
			cout << "February has 29 days." << endl;
		else
			cout << "February has 28 days." << endl;
		break;
	case 3:
		cout << "March has 31 days." << endl;
		break;
	case 4:
		cout << "April has 30 days." << endl;
		break;
	case 5:
		cout << "May has 31 days." << endl;
		break;
	case 6:
		cout << "June has 30 days." << endl;
		break;
	case 7:
		cout << "July has 31 days." << endl;
		break;
	case 8:
		cout << "August has 31 days." << endl;
		break;
	case 9:
		cout << "September has 30 days." << endl;
		break;
	case 10:
		cout << "October has 31 days." << endl;
		break;
	case 11:
		cout << "November has 30 days." << endl;
		break;
	case 12:
		cout << "December has 31 days." << endl;
		break;
	default:
		cout << "Invalid month. Please enter a number between 1 and 12." << endl;
	}

	return 0;
}
