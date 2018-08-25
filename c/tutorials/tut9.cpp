#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	int myAge = 39;
	char myGrade = 'A';
	
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;

	//reference operator is an &

	cout << "myAge is located at " << &myAge << endl;

	//pointers & references
	
	int* agePtr = &myAge; //pointer

	cout << "Address of pointer " << agePtr << endl;
	
	cout << "Data at memory address " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 34};

	int* numArrayPtr = badNums;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	cout << "Address " << badNums << " Value " << *badNums << endl;

	return 0;

}