#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first name and second name and age!\n";

	string first_name, second_name;
	int age;

	cin >> first_name >> second_name >> age;

	string name = first_name + ' ' + second_name;

	name += "Jr.";

	age = age + 1;
	age += 1;
	++age;

	cout << "Hello, " << name << "! (age: " << age << ")\n";

	return 0;

}