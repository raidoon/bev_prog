#include "std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
void f(vector<int> v)
{

	vector<int> lv(v.size());
	lv = v;
	cout << endl;
	cout << "Átmásolt elemek lv-ben:\n";
	for (auto& a : lv) cout << a << '\t';
    cout << '\n';

	vector<int> lv2 = v;
	cout << endl;
	cout << "Átmásolt elemek lv2-ben:\n";
    for (auto& a : lv2) cout << a << '\t';
    cout << '\n';
}

int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; }

int main()
{
	cout << "Calling f() with gv as it's argument:\n";
	f(gv);

    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
        vv[i] = fac(i + 1);
  
    cout << endl;
    cout << "Calling f() with vv as it's argument\n";
    f(vv);
}