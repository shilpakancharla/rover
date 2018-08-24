// This is a comment

/*

multi-line
 */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	cout << "Hello World!" << endl;

	const double PI = 3.1415926535;

	char myGrade = 'A'; //takes up one byte
	
	bool isHappy = true; //true = 1, false = 0

	int myAge = 39;

	float favNum = 3.141592; //accurate up to 6 decimal places

	double otherfavNum = 1.6180339887; //accurate up to 15 digits in length

	cout << "Favorite Number: " << favNum << endl;

	cout << "Size of int: " << sizeof(myAge) << endl; // can do the same for the rest of data types

	int largestInt = 2147483647;

	cout << "Largest int " << largestInt << endl; //largest integer that can be printed

	//arithmetic, can use +, -, *, /, % (modulus), ++, --

	int five = 5;

	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	//five += 6; five = five + 6 (same thing)

	//order of operations
	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;

	cout << "4 / 5 = " << 4 / 5 << endl; //does not provide intended result; you need casting

	cout << "4 / 5 = " << (float) 4 / 5 << endl; //can use int also

	//other types include
	// short int: at least 16 bits
	// long int: at least 32 bits
	//long long int: at least 64 bits
	//unsigned int: same size as signed version
	//long double: not less than double
	
	return 0;
}