#include <iostream>
using namespace std;

/* comment */

// main() is where program execution begins
int main() {
	cout << "Hello World" << endl; //prints Hello World
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	extern int d = 3, f = 5; 
	//declaration of d and f; extern keyword used to declare a variable at any place
	int d = 3; f = 5; //definition and initializing d and f.
	byte z = 22; //definition and initializes z.
	char x = 'x'; //the variable x has the value 'x'.	

	return 0;
}