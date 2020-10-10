#include <iostream>
#include "std_lib_facilities.h"

int main(){
	try{

		cout << " Success!\n " ;
		cout << " Success!\n";
		cout << " Success " << "!\n";
		cout << "success" << '\n';
	
		int res = 7;
		vector<int> v(10);
		v[5] = res; 
		cout << " Success!\n " ;
	
		vector<int> v2(10);
		v2[5] = 7; 
		if (v2[5]==7)
			cout << " Success!\n " ;
		
		if (bool cond=true) 
		cout << " Success!\n " ; 
		else 
			cout << " Fail!\n " ;
		
		bool c = false; 
		if (!c)
			cout << " Success!\n " ; 
		else cout << " Fail!\n " ;
		
		string s = " ape " ;
		bool c2 = " fool " >s;
		if (c2) 
			cout << " Success!\n " ;
		
		string s2 = " ape " ; 
		if (s2!= " fool " )
			cout << " Success!\n " ;
		
		string s3 = " ape " ; 
		if (s3!= " fool " ) 
			cout << "Success!\n " ;

		string s4 = " ape " ; 
		if (s4 != " fool " ) 
			cout << "Success!\n " ;
		
		vector<char> v3(5);
		for (int i=0; 0<v3.size(); ++i)
			cout << "Success!\n";
		
		vector<char> v4(5); 
		for (int i=0; i<=v4.size(); ++i) ; 
			cout << " Success!\n " ;
		
		string s5 = "Success!\n " ; 
		for (int i=0; i<s5.size(); ++i) 
			cout << s5[i];
		
		if (true) 
			cout << " Success!\n " ; 
		else 
			cout << " Fail!\n " ;
		
		int x = 2000; 
		int c3 = x; 
		if (c3==2000) 
			cout << "Success!\n " ;
		
		string s6 = " Success!\n " ; 
		for (int i=0; i<=10; ++i) 
			cout << s6[i];
		
		vector<int> v5(5); 
		for (int i=0; i<=v5.size(); ++i) ; 
			cout << " Success!\n " ;
		
		int i=0; 
		int j = 9; 
		while (i<10) ++i;
		if (j<i) 
			cout << "Success!\n " ;
		
		int x2 = 2.0;
		double d = 4.5;
		if (d==2*x2+0.5)
			cout << " Success!\n " ;
		
		string s7 = " Success!\n " ;
		for (int i=0; i<=10; ++i) 
			cout << s7[i];
		
		i=0;
		j=8;
		while (i<10) ++i; {
			if (j<i) 
				cout << " Success!\n " ;
		}
		
		int x3 = 4; 
		double d2 = 5/(x3 - 2); 
		if (d2=2*x3+0.5) 
			cout << " Success!\n " ;
		
		cout << " Success!\n " ;
		}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
	return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
	return 2;
	}

}