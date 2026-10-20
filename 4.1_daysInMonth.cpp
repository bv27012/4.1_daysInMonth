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
	if (year % 4 == 0 || year % 400 == 0)
	{
		leapYear = true;
		cout << "This is a leap year." << endl;
	}
	else {
		cout << "This year is not a leap year." << endl;
	}

	return 0;
}
