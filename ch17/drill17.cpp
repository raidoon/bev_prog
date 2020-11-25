#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
	{
		os << "int[" << i << "]: " << a[i] << " | Title: [ " << &a[i] << " ]" << endl;
	}
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << "int[" << i << "]: " << a[i] << " | Title: [ " << &a[i] << " ]" << endl;
	}
}

int* allokalas(int n)
{
	int* a = new int[n];
	int startervalue = 100;
	for (int i = 0; i < n; ++i)
	{
		a[i] = startervalue++;
	}
	return a;
}

vector<int*> allokalasvector(int n)
{
	vector<int*> elem;
	int startervalue = 100;
	for (int i = 0; i < n; ++i)
	{
		elem.push_back(new int{startervalue++});
	}
	return elem;
}

void printVector(vector<int*> v)
{
	for (long unsigned int i = 0; i < v.size(); ++i)
	{
		cout << "int[" << i << "]: " << *v[i] << " | Title: [" << &v[i] << "]" << endl;
	}
}

void deleteVector(vector<int*> v)
{
	for ( auto& vector : v)
	{
		delete vector;
	}
}
int main()
try{
	int* tenelem = new int[10];

	cout << "----------" << endl;
		 cout << "Drill 2" << endl;
	cout << "----------" << endl;

	for(int i=0; i < 100; ++i)
	{
		cout << "int[" << i <<"]: " << tenelem[i] << " | Title: [ " << &tenelem[i] << " ]" << endl;
	}

delete[] tenelem;

cout << "----------" << endl;
	cout << "Drill 4" << endl;
cout << "----------" << endl;

int* tenelem2 = new int[10];

print_array10(cout, tenelem2);

delete[] tenelem2;

cout << "----------" << endl;
		 cout << "Drill 5" << endl;
	cout << "----------" << endl;

int* tenelem3 = new int[10]{100,101,102,103,104,105,106,107,108,109};

for (int i = 0; i < 10; ++i)
{
	cout << "int[" << i << "]: " << tenelem3[i] << " | Title: [" << &tenelem3[i] << " ]" << endl;
}

delete[] tenelem3;

cout << "----------" << endl;
		 cout << "Drill 6" << endl;
	cout << "----------" << endl;

int* elevenelem = new int[11]{100,101,102,103,104,105,106,107,108,109,110};

for (int i = 0; i < 11; ++i)
{
	cout << "int[" << i << "]: " << elevenelem[i] << " | Title: [" << &elevenelem[i] << " ]" << endl;
}
delete[] elevenelem;

cout << "----------" << endl;
	cout << "Drill 7" << endl;
cout << "----------" << endl;

int* elem = new int[2]{1234, 9876};

print_array(cout, elem, 3);
delete[] elem;

cout << "----------" << endl;
	cout << "Drill 8" << endl;
cout << "----------" << endl;

//int* twenty = new int[20]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int* twenty = allokalas(20);

print_array(cout, twenty, 20);

delete[] twenty;

cout << "**********" << endl;
vector<int*> v_tenelem = allokalasvector(10);
printVector(v_tenelem);

cout << "**********" << endl;
vector<int*> v_elevenelem = allokalasvector(11);
printVector(v_elevenelem);

cout << "**********" << endl;
vector<int*> v_twenty = allokalasvector(20);
printVector(v_twenty);

cout << "**********" << endl;
deleteVector(v_tenelem);
deleteVector(v_elevenelem);
deleteVector(v_twenty);

return 0;

} catch(exception& e)
{
	cerr << e.what() << endl;
	return 1;
} catch(...)
{
	cerr << "Error!" << endl;
	return 2;
}