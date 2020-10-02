#include "std_lib_facilities.h"
int main()
{
	vector<double> temps;

	for (double temp; cin >> temp; )
		temp.push_back(temp);

	for (auto temp : temps)
		cout << temp << endl;

	double sum = 0;
	for (auto temp : temps) sum += temp;

	cout << "Average temp: " << sum / temps.size() << endl;

	sort (temps);

	for (auto temp : temps)
		cout << temp << endl;
	
	cout << "Meadian temp: " << temps[temps.size()/2] << endl;


	return 0;
}