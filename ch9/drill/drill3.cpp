// 9.4.3

#include "std_lib_facilities.h"

class Date {
	int y, m, d;
public:	
	Date(int y, int m, int d);
	void add_day(int n);
	int year() const { return y; }
	int month() const { return m; }
	int day() const {return d; }
   
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		y = y;
	else
		error("Invalid year");
	
	if (m <= 12 && m > 0)
		m = m;
	else
		error("Invalid month");

	if (d > 0 && d <= 31)
		d = d;
	else
		error("Invalid day");
} 

void Date::add_day( int n)
{
	d += n;
	if (d > 31)
	{
		m++;
		d -= 31;
		if (m > 12)
		{
			y++;
			m -= 12;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
try{

	Date today {1978, 6, 25};
	today.add_day(1);

cout << "Date: " << today.year() << today.month() << '.' << today.day() << ".\n";

	Date tomorrow {today};
	tomorrow.add_day(1);


cout << "Date: " << tomorrow.year() << ". "
		<< tomorrow.month() << ' '
		<< tomorrow.day() << ".\n";

Date birthday {1960, 12, 31};
//birthday.m = 14;  // error: Date::m is private
cout << birthday.month() << '\n';



	return 0;

}
catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}