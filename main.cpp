#include <iostream>
#include <limits.h>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stoi;

void coutHello(string str) {
	cout << "Hello " << str << " !!!\n";
}

void dataTypes() {

	// Numerical Data Types
	cout << "--------------=< Numerical Data Types >=-------------" << endl;
	cout << "Size of Short: (short):  " << sizeof(short) << " byte(s)" << "     MIN: " << SHRT_MIN << "; MAX: " << SHRT_MAX << endl;
	cout << "Size of (unsigned short):" << sizeof(unsigned short) << " byte(s)" << "     MIN: " << "0" << "; MAX: " << USHRT_MAX << endl;
	cout << "Size of Integer (int): _ " << sizeof(int) << " byte(s)" << "     MIN: " << INT_MIN << "; MAX: " << INT_MAX << endl;
	cout << "Size of Long (long): ___ " << sizeof(long) << " byte(s)" << "     MIN: " << LONG_MIN << "; MAX: " << LONG_MAX << endl;
	cout << "Size of (long long): ___ " << sizeof(long long) << " byte(s)" << "     MIN: " << LLONG_MIN << "; MAX: " << LLONG_MAX << endl;

	cout << "Size of Float (float): _ " << sizeof(float) << " byte(s)" << "     MIN: " << FLT_MIN << "; MAX: " << FLT_MAX << endl;  // 7 digits of precision
	cout << "Size of Double (double): " << sizeof(double) << " byte(s)" << "     MIN: " << DBL_MIN << "; MAX: " << DBL_MAX << endl;  // 15 digits of precision
	cout << "Size of (long double): _ " << sizeof(long double) << " byte(s)" << "     MIN: " << LDBL_MIN << "; MAX: " << LDBL_MAX << endl;  // 15 digits of precision

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
	cout << "!(a < b)  ==>  " << (!(a < b)) << endl; // Logical NOT

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

void calculator() {

	// The calculator that performs a mathematical operation on two numbers, and throws an error if the operation is not supported.

	double n1, n2;
	double result = 0;
	char operation;
	bool error = false;

	// Data input
	cout << endl << "Please enter first number: ";
	cin >> n1;
	cout << "Please enter mathematical operation ('+', '-', '*', '/'): ";
	cin >> operation;
	cout << "Please enter second number: ";
	cin >> n2;

	// Result calculation
	switch (operation) {
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;
	case '/':
		result = n1 / n2;
		break;
	default:
		// If operation unsupported display error message
		cout << "Error: Unsupported operation." << endl;
		error = true;
	}

	// If not an error display answer
	if (!error) cout << endl << n1 << " " << operation << " " << n2 << " = " << result << endl << endl;

}

void conditions() {

	// Conditions IF and ELSE
	double n;
	// Data input
	cout << "Please enter number: ";
	cin >> n;
	// This condition checks if the number greater than 100 or 50
	if (n > 100) {
		cout << "Your number is greater than 100!" << endl;
	}
	else {
		if (n > 50) {
			cout << "Your number is not greater than 100 but greater than 50!" << endl;
		}
		else {
			cout << "Your number is not greater than 50!" << endl;
		}
	}

	// Conditions IF and ELSE IF
	// Data input
	cout << "Please enter number: ";
	cin >> n;
	// This condition checks if the number greater than 100 or 50 or 10
	if (n > 100) {
		cout << "Your number is greater than 100!" << endl;
	}
	else if (n > 50) {
		cout << "Your number is not greater than 100 but greater than 50!" << endl;
	}
	else if (n > 10) {
		cout << "Your number is not greater than 50 but greater than 10!" << endl;
	}
	else {
		cout << "Your number is not greater than 10!" << endl;
	}
	system("pause");
}

void typecasting() {

	cout << "-------------------=< Typecasting >=-----------------------" << endl << endl;
	// Converting String to Integer
	string s = "12345";
	int i = stoi(s);
	cout << "String to Integer:" << endl;
	cout << "String: \"" << s << "\";   " << "String to Int 'stoi(s)': " << i << ";   " << "Int + 1: " << i + 1 << endl << endl;

	// Float to Int
	float f = 10.27;
	i = (int)f;
	cout << "Float to Integer:" << endl;
	cout << "Float: " << f << "     Float to Int: " << i << endl << endl;

	// Integer to Float
	int a = 7, b = 3;
	cout << "Integer to Float:" << endl;
	cout << "int a = 7, b = 3; (float) a / (float) b : " << (float)a / (float)b;
	cout << endl;

	// Integer to String
	i = 1234567;
	s = std::to_string(i);
	cout << "Integer to String:" << endl;
	cout << "int i = 1234567; std::to_string(i) : \"" << s <<"\"";

}

void storageClasses() {

	// Default storage class
	auto aa = 10;

	// Extern linkage for non-const globals
	extern int enc;

	// Extern linkage for const variable
	extern const int EC;

	// Static
	static int sa = 10;

}

void cycles() {
	///////////////// FOR LOOP //////////////////
	for (int i = 1; i <= 5; i++) {
		cout << i << " Hello 'for' loop!" << endl;
	}
	///////////////// WHILE LOOP ////////////////
	int i = 1;
	while (i <= 5) {
		cout << i << " Hello 'while' loop!" << endl;
		i++;
	}
	//////////////WHILE-DO LOOP///////////////////
	i = 1;
	do {
		cout << i << " Hello 'while-do' loop!" << endl;
		i++;
	} while (i <= 5);
}

int main() {

	// Function that prints "Hello" + string argument + "!!!" to the console
	// coutHello("C++");

	// Function that prints size of different data types
	// dataTypes();

	// Operators usage examples
	// operators();

	// User Input std::cin
	// userInput();

	// Calculator Using Swith Statement
	// calculator();

	// Conditions (if), (else) and (else if)
	// conditions();

	// Typecasting
	// typecasting();

	// Storage Classes
	// storageClasses();

	// Cycles. Operators of the cycle (for), (while) and (do while)
	// cycles();

	return 0;
}