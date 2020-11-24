// 9.7.1

#include "std_lib_facilities.h"

namespace UDChrono {

class Year {
	static constexpr int min = 1800;
	static constexpr int max = 2077;
public:
	class Invalid{};
	Year(int x): y(x) { if (x < min || x > max) throw Invalid{}; }
	int year() const { return y; }
	void increment() {y++; }
private:
	int y;
};

Year operator++(Year& year)
{
	year.increment();
}

ostream& operator<<(ostream& os, Year year)
{
	return os << year.year();
}

const vector<string> months =
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
};

enum class Month {
	jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date {
	Year year;
	Month month;
	int day;
public:	
	class Invalid {};
	Date(Year y, Month m, int d): year(y), month(m), day(d) {if (!is_valid()) throw Invalid{}; }
	bool is_valid();
	void add_day(int n);
	Year get_year() { return year;}
	Month get_month() { return month;}
	int get_day() {return day;}
};

bool Date::is_valid()
{
	if (day > 31 || day < 1) return false;

	return true;
}

void Date::add_day( int n)
{
	day += n;
	if (day > 31)
	{
		++month;
		day -= 31;
		if (month == Month::jan)
		{
			++year;
		}
	}
}
} // UDchrono end!

int main()
try{
		using UDChrono::Date;
		using UDChrono::Month;

	Date today {1978, Month::jun, 25};

	cout << "Today: " << today.get_year() << '.'
		<< today.get_month() << '.' << today.get_day() << ".\n";
	

	return 0;

}	catch (UDChrono::Date::Invalid) {
	cout << "Invalid date\n";
	return 1;

} catch (exception& e) {
	cout << e.what() << endl;
	return 2;
}