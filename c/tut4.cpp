#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'}; //end with 0

	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;

	string yourName;

	cout << "What is your name? ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	double eulerConstant = .57721;
	string eulerGuess;

	double eulerGuessDouble;
	cout << "What is Euler's Constant? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulerConstant) {

		cout << "You are right" << endl;

	} else {

		cout << "You are wrong" << endl;

	}

	return 0;

}