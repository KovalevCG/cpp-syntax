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
	cout << endl << endl;
	cout << "----------------=< Textual Data Types >=---------------" << endl;

	char c = 'a';
	cout << "Size of (char):  " << sizeof(c) << " byte(s)" << "     MIN: " << CHAR_MIN << "; MAX: " << CHAR_MAX << endl;
	string st = "ABC";
	cout << "Size of (string):  " << sizeof(st) << " byte(s)" << endl;

	// Boolean Data Types
	cout << endl << endl;
	cout << "----------------=< Boolean Data Types >=---------------" << endl;

	bool bl = true;
	cout << "Size of (bool):  " << sizeof(bl) << " byte(s)" << endl;

}

void operators() {
	
	// Assignment Operators
	cout << endl << endl;
	cout << "----------------=< Assignment Operators >=---------------" << endl;
	int a = 10;
	cout << "a = " << a << ";   ++a = " << ++a << ";   a = " << a << endl;
	a = 10;
	cout << "a = " << a << ";   a++ = " << a++ << ";   a = " << a << endl;

	// Logical Operators
	cout << endl;
	cout << "----------------=< Logical Operators >=---------------" << endl;
	a = 10;
	int b = 20;
	cout << "a = 10; b = 20;\n";
	cout << "(a < b) || (a > 15)  ==>  " << ((a < b) || (a > 15)) << endl; // Logical OR
	cout << "(a < b) && (a > 15)  ==>  " << ((a < b) && (a > 15)) << endl; // Logical AND
	cout << "!(a < b)  ==>  " << (! (a < b)) << endl; // Logical NOT

	// Bitwise Operators
	cout << endl;
	cout << "----------------=< Bitwise Operators >=---------------" << endl;
	a = 5; // (00000101)
	b = 9; // (00001001)
	cout << "a = " << a << "," << " b = " << b << endl;
	cout << "a & b = " << (a & b) << endl;          // bitwise AND
	cout << "a | b = " << (a | b) << endl;          // bitwise OR
	cout << "a ^ b = " << (a ^ b) << endl;          // bitwise XOR
	cout << "~(a) = " << (~a) << endl;              // bitwise Complement
	cout << "b << 1" << " = " << (b << 1) << endl;  // bitwise Shift Left
	cout << "b >> 1 " << "= " << (b >> 1) << endl;  // bitwise Shift Right


}

void userInput() {
	string name;
	cout << "Please enter your name: " << endl;
	cin >> name;
	cout << "Hello " << name << "!" << endl;
}

int main() {


	// Function that prints "Hello" + string argument + "!!!" to the console
	//coutHello("C++");

	// Function that prints size of different data types
	//dataTypes();

	// Operators
	//operators();

	// User Input
	userInput();

	return 0;
}