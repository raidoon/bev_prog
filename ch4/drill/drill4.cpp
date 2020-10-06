#include "std_lib_facilities.h"

const vector<string> legal_units {"cm", "m", "in", "ft"};

bool is_legal_unit(string unit)
{
	bool is_legal {false};

	for (string legal_unit : legal_units)
	if (legal_unit == unit)
		is_legal = true;

	return is_legal;
}
void print_legal_units()
{
    cout << "\tm as meters\n" << "\tcm as centimeters\n"
        << "\tin as inches\n" << "\tft as feet\n";
}

int main()
{
	/*
	while (cin >> value >> unit);
	{
	
	if ((a-b)<abs(0.01) && (a-b)>=0) {
		cout << "They are almost equal\n";
	}

	else if ( b < a) {
		cout << "The smaller is: " << b << endl;
		cout << "The larger is: " << a << endl;
	}

	else if (a > b) {
		cout << "The smaller is: " << a << endl;
		cout << "The larger is: " << b << endl;
	}
		else if ( a = b ) {
		cout << "They are equal!" << endl;
	}
}*/
	cout << "Please enter some values!\n";
	/*char q;*/
	double value;
	double biggest = 0;
	double smallest = 0;
	double meter;
	double sum = 0;
	int i = 0;
	//int n = sizeof(value) / sizeof(value[0]);
	string unit = "";
	vector<double> values;
	
	//printLegalUnits();

		while (cin >> value >> unit) {
			i += 1;

			if (value > biggest) {
				biggest = value;
				cout << "The biggest so far: " << biggest << " m" << endl;
			}
			
			else if( value < smallest) {
				smallest = value;
				cout << "The smallest so far: " << smallest << " m" << endl;
			}

			switch (unit[0]) {

		case 'c':
		cout << value / 100 << " m" << endl;
		meter = value / 100;
		cout << value / 2.54 << " in" << endl;
		cout << value / 2.54 / 12 << " ft" << endl;
		cout << value << " cm" << endl;
		sum += value / 100;
		break;

		case 'f':
		cout << value* 2.54 / 100 << " m" << endl;
		meter = value * 2.54 / 100;
		cout << value * 12 << " in" << endl;
		cout << value << " ft" << endl;
		cout << value * 2.54 << " cm" << endl;
		sum += value * (2.54 / 100) / 12;
		break;

		case 'i':
		cout << value * 2.54 / 100 << " m" << endl;
		meter = value * 2.54 / 100;
		cout << value << " in" << endl;
		cout << value / 12 << " ft" << endl;
		cout << value * 2.54 << " cm" << endl;
		sum += value * 2.54 / 100;
		break;

		case 'm':
		cout << value << " m" << endl;
		meter = value;
		cout << value *100 / 2.54 << " in" << endl;
		cout << value / 12 << " ft" << endl;
		cout << value * 100 << " cm" << endl;
		sum += value;
		break;

/*		case 'q':
		cout << "Bye!";
		break;
*/
		default:
		cout << "Illegal unit, please try a different one: \n";
		print_legal_units();
		break;
	}
		}

		cout << "The smallest: " << smallest << endl;
		cout << "The largest: " << biggest << endl;
		cout << "Number of entries: " << i << endl;
		cout << "Sum of meters: " << sum << endl;
		cout << "The entered values in sorted order: \n";

		sort(values);
    for (double value: values)
        cout << '\t' << value << " m\n";
  
		/*sort(value, value+n);
		cout << "The entered values in sorted order: \n";
		for (int i = 0; i < n; ++i)
		cout << values[i] << "";*/
    /*sort(value);
		cout << fixed;
		for (auto const &x : values)
		{
			cout << x << "\n";
		}*/
		return 0;
	}