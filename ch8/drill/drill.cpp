#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//void swap_cr(const int& a, const int& b)
 //{
 //    int temp;
   //  temp = a;
     //a = b;			--> assigment of read_only reference 'a'
     //b = temp;		--> assigment of read_only reference 'b'
 //}

int main()
{
    int x = 7;
    int y = 9;

    swap_r(x, y);  	//lefordult és működik is
    swap_v(x, y);	//lefordult, de nem swappol, mert a swap_v csak a saját argumentseiből tud kezelni


  swap_r(7, 9);	//--> (cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int') 
//   nem tud lefordulni, mert egy rvalue (literal-t) adunk meg neki, és nincs olyan object amire hivatkozhatna. 
  

   swap_v(7, 9);	// lefordult, de nem tud csinálni semmit. A függvény visszatérésekor megsemmisülnek az ideiglenes
//   objektumok, emiatt nem tud hivatkozni az eredetire.


    const int cx = 7;
    const int cy = 9;

  swap_r(cx, cy);	//	-->	 nem fordul le. Non-cost változót akarunk használni, egy const-hoz.
    
    swap_v(cx, cy);		// lefordult, de nem swappol.


   swap_r(7.7, 9.9);	//	--> nem fordult le. ugyanaz, mint swap_r(7, 9). 
   // egy rvalue (literal-t) adunk meg neki, és nincs olyan object amire hivatkozhatna. 
    
    swap_v(7.7, 9.9);	// lefordult de nem csinál semmmit. Ugyanazért, mint a swap_v(7,9)
  // nem swappol, mert a swap_v csak a saját argumentseiből tud kezelni  


    double dx = 7;
    double dy = 9;

   swap_r(dx, dy);		// nem fordult le. Mivel egy implicit váltást csinálunk double-ből int-re
    // a függvény egy rvalue-t kap meg, amivel semmilyen hivatkozás sem lehetséges.
    swap_v(dx, dy);		//lefordult, de nem swappolt, ahogy a töbi swap_v sem.


   swap_r(7.7, 9.9);	// nem fordult le.
  //cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
  //nem tud lefordulni, mert egy rvalue (literal-t) adunk meg neki, és nincs olyan object amire hivatkozhatna. 

    swap_v(7.7, 9.9);	//lefordult. Gondolom nem csinál semmit, pont mint a korábbi swap_v(7.7,9.9)


    return 0;
}