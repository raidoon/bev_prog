#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first name!\n";
	string first_name;
	cin >> first_name;

	cout << "Hello, " << first_name << "!\n";

	cout << "Please enter the name of the person you want to write to!\n";
	string friend_first_name;
	cin >> friend_first_name;

	cout << "Dear " << friend_first_name << ",\n";

	 cout << "How are you lately? I havent heard from you in a while.\n";
	 cout << "I am fine, I got into the university I wanted.\n";
	 cout << "My classes are great and my classmates are cool. It's nothing like high school.\n";
	 cout << "I am happy but I really miss you, I hope we can meet again soon!\n";


	 cout << "Please enter a different friend's name!\n";
	 string friend_name;
	 cin >> friend_name;

	 cout << "Have you seen " << friend_name << " lately?\n";

	 cout << "Please enter m, if your friend is male, and f, if female.\n";
	 string friend_sex;
	 cin >> friend_sex;

	 if (friend_sex == "m")
	 	cout << "If you see " << friend_name << ", please ask him to call me.\n";

	 else
	 	cout << "If you see " << friend_name << ", please ask her to call me\n";

	 cout << "Please enter the age of your friend!\n";
	 int age;
	 cin >> age;

	 if ( 0 <= age >= 110)
	 	simple_error("You're kidding!");

	 else 
	 	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	 if (age < 12)
	 	 cout << "Next year you will be" << age++ << "!\n";
	 else if (age == 17)
	 	cout << "Next year you will be able to vote!\n";
	 else if (age > 70)
	 	cout << "I hope you are enjoying retirement.\n";
cout << "Yours sincerely, \n\n Ecsedi Hanna";

}