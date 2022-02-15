#include <iostream>
#include <limits.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;


void coutHello (string str) {
	cout << "Hello " << str << " !!!\n";
}

void dataTypes() {

	// Numerical Data Types
	cout << "--------------=< Numerical Data Types >=-------------" << endl;
	cout << "Size of Short: (short):  " << sizeof (short) << " byte(s)" << "     MIN: " << SHRT_MIN << "; MAX: " << SHRT_MAX << endl;
	cout << "Size of (unsigned short):" << sizeof(unsigned short) << " byte(s)" << "     MIN: " << "0" << "; MAX: " << USHRT_MAX << endl;
	cout << "Size of Integer (int): _ " << sizeof (int) << " byte(s)" << "     MIN: " << INT_MIN << "; MAX: " << INT_MAX << endl;
	cout << "Size of Long (long): ___ " << sizeof (long) << " byte(s)" << "     MIN: " << LONG_MIN << "; MAX: " << LONG_MAX << endl;
	cout << "Size of (long long): ___ " << sizeof (long long) << " byte(s)" << "     MIN: " << LLONG_MIN << "; MAX: " << LLONG_MAX << endl;

	cout << "Size of Float (float): _ " << sizeof (float) << " byte(s)" << "     MIN: " << FLT_MIN << "; MAX: " << FLT_MAX << endl;  // 7 digits of precision
	cout << "Size of Double (double): " << sizeof (double) << " byte(s)" << "     MIN: " << DBL_MIN << "; MAX: " << DBL_MAX << endl;  // 15 digits of precision
	cout << "Size of (long double): _ " << sizeof (long double) << " byte(s)" << "     MIN: " << LDBL_MIN << "; MAX: " << LDBL_MAX << endl;  // 15 digits of precision

	unsigned int ui = 10; // unsigned integer
	signed int si = -10;  //signed integer, same as (int)


	// Textual Data Types
	char c = 'a';
	cout << endl << endl;
	cout << "----------------=< Textual Data Types >=---------------" << endl;
	cout << "Size of (char):  " << sizeof(c) << " byte(s)" << "     MIN: " << CHAR_MIN << "; MAX: " << CHAR_MAX << endl;
	string st = "ABC";
	cout << "Size of (string):  " << sizeof(st) << " byte(s)" << endl;



	// Boolean Data Types
}

int main() {

	/*
	
	// Function that prints "Hello" + string argument + "!!!" to the console
	coutHello("C++");

	*/

	// Function
	dataTypes();

	return 0;
}