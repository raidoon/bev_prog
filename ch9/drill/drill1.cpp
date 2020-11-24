//  9.4.1

#include "std_lib_facilities.h"

struct Date {
    int y;
    int m;
    int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if( y > 0)
		y = y;
	else
		error("Invalid year");
	if( m <= 12 && m > 0)
		m = m;
	else
		error("Invalid month");
	if( d > 0 && d <=31)
		d = d;
	else
		error("Invalid day");

	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date& dd, int n)
{
	dd.d += n;
	if (dd.d > 31)
	{
		dd.m++;
		dd.d -= 31;
		if (dd.m > 12)
		{
			dd.y++;
			dd.m -= 12;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

int main()
try{

Date today;
init_day(today, 1978, 6, 25);

Date tomorrow{today};
add_day(tomorrow, 1);

cout << "Today: " << today << '\n';
    cout << "Tomorrow: " << tomorrow << '\n';


Date test;

    init_day(test, 2004, 13, -5);  //invalid hónap és nap, tehát működik.
    add_day(test, 6);     // még mindig invalid hónap, bár a nap így jó lett.
  
    

return 0;
}
catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}