#include "std_lib_facilities.h"

int error_ID_number = 0;

int area(int length, int width)
{
	if (length <= 0)
	{
		error_ID_number = 2;
	}
	if (width <= 0)
	{
		error_ID_number = 3;
	}

	return length * width;
}

int framed_area(int x, int y)
{
	constexpr int frame_width = 2;

	return area(x- frame_width, y- frame_width);
}

int main()
{
	int x = 2;
	int y = 4;

	//if ( x <= 0 || y <= 0 ) error("Non-positive arguments");
	int area1 = area(x, y);
	//if (area1 < 0) error ("Non-positive arguments");
if (error_ID_number == 2) error("Non-positive length");
if (error_ID_number == 3) error("Non-positive width");

	cout << "area1: " << area1 << endl;

	int area2 = area(3, 6);
	cout << "area2: " << area2 << endl;

if ( x - frame_width <= 0 || y - frame_width <= 0) error("Non-positive length");

	int framed_area1 = framed_area(3, 7);
	cout << "framed_area1: " << framed_area1 << endl;

	double ratio = double(area1) / framed_area1;
	cout << "ratio: " << ratio << endl;

	return 0;
}
