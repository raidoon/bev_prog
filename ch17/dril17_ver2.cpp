#include "std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
    for(int i = 0; i < 10; ++i)
        os << a[i] << endl;
    return os;
}


ostream& print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; ++i)
        os << a[i] << endl;
    return os;
}

ostream& print_vector(ostream& os, vector<int>& b)
{
    for(int c : b)
        os << c << endl;
    return os;
}

int main()
{
    //pointer
    int* a = new int[10];

    for(int i = 0; i < 10; ++i)
        cout << a[i] << endl;

    delete[] a;

    print_array10(cout, a);
    cout << endl;
    delete[] a;

    int *b = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    print_array10(cout, b);
    cout << endl;
    delete[] b;

    int *c = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    for(int i = 0; i < 11; ++i)
        cout << c[i] << endl;
    cout << endl;
    delete[] c;

    int *d = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 110, 111, 112, 113, 114, 115, 116, 117, 118};
    print_array(cout, d, 20);
    cout << endl;
    delete[] d;

    cout << "Vektoros kiiratas\n";
    vector<int> e(10);
    int y=100;
    for(int& v : e)
    {
        v=y;
        ++y;
    }
    print_vector(cout, e);
    cout << endl;

    vector<int> f(11);
    int x=100;
    for(int& v : f)
    {
        v=x;
        ++x;
    }
    print_vector(cout, f);
    cout << endl;

    vector<int> g(20);
    int z=100;
    for(int& v : g)
    {
        v=z;
        ++z;
    }
    print_vector(cout, g);
    cout << endl;

    return 0;
}
