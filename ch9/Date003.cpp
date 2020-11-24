#include "std_lib_facilities.h"

class Date {
	int year, month, day;
public:	
	Date(int y, int m, int d);
	void add_day(int n);
	int get_year() { return year;}
	int get_month() { return month;}
	int get_day() {return day;}
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	
	if (m <= 12 && m > 0)
		month = m;
	else
		error("Invalid month");

	if (d > 0 && d <= 31)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day( int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try{
	Date today {2020, 8, 31};
/*
	cout << "Date: " << today.year << '.'
		<< today.month << '.' << today.day << ".\n";
*/
	today.add_day(1);
	
	cout << "Date: " << today.get_year() << '.'
		<< today.get_month() << '.' << today.get_day() << ".\n";	

	return 0;
} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}