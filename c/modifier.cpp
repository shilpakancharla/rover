#include <iostream>
using namespace std;

/* This program shows the difference between 
 * signed and unsigned integers.
 * const: objects of type const cannot be changed by your program during execution
 * volatile: tells compiler that a variable's value may be changed in ways not 
 * 			explicitly specified by the program
 * restrict: points where object can be accessed  
 */

int main() {
	short int i; 	// a signed short integer
	short unsigned int j; 	// an unsigned short integer

	j = 50000;

	i = j;
	cout << i << " " << j;

	return 0;
}