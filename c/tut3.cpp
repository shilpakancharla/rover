#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	//ternary operator
	//variable = (condition) ? true : false

	int largestNum = (5 > 2) ? 5 : 2;

	//arrays

	int myFavNums[5]; 

	int badNums[5] = {4, 13, 14, 24, 34}; //indexed at 0
	
	cout << "Bad Number 1: " << badNums[0] << endl;

	//multidimensional array

	char myName[6][9] = {{'S', 'h', 'i', 'l', 'p', 'a'}, 
						{'K', 'a', 'n', 'c', 'h', 'a', 'r', 'l', 'a'}};

	cout << "2nd letter in 2nd array: " << myName[1][1] << endl;

	//first bracket for array, second bracket for location

	myName[0][2] = 'e';

	cout << "New Value: " << myName[0][2] << endl;

	//for loop

	for(int i = 1; i <= 10; i++) {
		
		cout << i << endl;
	}

	for(int j = 0; j < 6; j++) {
		
		for(int k = 0; k < 9; k++) {
			
			cout << myName[j][k];
		}

		 cout << endl;
	}

	return 0;
}