#include "std_lib_facilities.h"

class Date {

public:
int y, m, d;
Date(int y, int m, int d) :y(y), m(m), d(d) {};
void add_day(int n);
int month() { return m; }
int day() { return d; }
int year() { return y; }
};

void Date::add_day(int n) {
d += n;
}

int main()
try
{
Date today{ 1978, 6, 25 };
Date tomorrow = today;

tomorrow.add_day(1);

cout << "Year: " << today.y << " Month: " << today.m << " Day: " << today.d << "\n";
cout << "Year: " << tomorrow.y << " Month: " << tomorrow.m << " Day: " << tomorrow.d << "\n";

return 0;
}
catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}