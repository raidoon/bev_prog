#include "std_lib_facilities.h"

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int ga[], int n)
{
	int la[10] = { };

    for (int i = 0; i < n; ++i) la[i] = ga[i];
    cout << endl;
    cout << "Elements of la:\n";
    for (int i = 0; i < n; ++i) cout << la[i] << ' ';
    cout << '\n';

    int* p = new int[n];

    for (int i = 0; i < n; ++i) p[i] = ga[i];
    cout << endl;
    cout << "Free store:\n";
    for (int i = 0; i < n; ++i) cout << p[i] << ' ';
    cout << '\n';
    delete[] p;
}

int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main()
{
	cout << endl;
    cout << "Call f() with ga as argument:\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);

    cout << endl;
    cout << "Call f() with aa as argument:\n";
    f(aa, 10);
}