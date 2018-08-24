#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	//generating random numbers between 1 and 100
	//seeded so will get same result every time
	int randNum = (rand() % 100) + 1;

	while(randNum != 100) {

		cout << randNum << ", ";

		randNum = (rand() % 100) + 1;
	}

	//can mimic what a for loop does with a while loop

	int index = 1;
	while(index <= 10) {
		cout << index << endl;
		index++;
	}

	//do-while loops

	string numberGuessed;
	int intNumberGuessed = 0;
	do {
		cout << "Guess between 1 and 10: ";
		getline(cin, numberGuessed); //cin is user input
		intNumberGuessed = stoi(numberGuessed);
		cout << intNumberGuessed << endl;
	} while (intNumberGuessed != 4);

	return 0;

}