#include "std_lib_facilities.h"

struct Point
{
	double x, y;
};

vector<Point>original_points;processed_points;

int main()
try {
	string file = "mydata.txt";
	double x, y;
	cout << "Please enter 7 (x,y) pairs! " << endl;
	int sum = 0;

	while(original_points.size() !=7)
	{
		++sum;
		cout << "X[" << sum << "]: ";
		cin >> x;
		cout << "Y[" << sum << "]: ";
		cin >> y;
		if (cin.good()) original_points.push_back(Point{x, y});
		else
		{
			cout << "Error!" << endl;
			return 0;
		}
	}

	ofstream ost {mydata.txt};

	int db = 0;
	int db2 = 0;

	for (const auto& v : original_points)
	{
		++db;
		cout << "X[" << db << "]: " << x.v << "Y[" << db2 <<"]: " << v.y << endl;
	}

	ost.close();

	ifstream ist (mydata.txt);
	if(!ist) error("Error!");

	string Xvalt;
	double Xvalue;
	string comma;
	string Yvalt;
	double Yvalue;

	while(ist >> Xvalt >> Xvalue >> comma >> Yvalt >> Yvalue)
	{
		processed_points.push_back(Point{Xvalue, Yvalue});
	}

	int db3 = 0;
	for (const auto& v : processed_points)
	{
		++db3;
		cout << "X[" << db3 << "]: " << x.v << "Y[" << db3 <<"]: " << v.y << endl;
	}

	ist.close();

	if(original_points.size() == processed_points.size()) cout << "Everything is good!" << endl;
	else
	{
		cout << "Something is wrong!";
	}

	return 0;

} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}
