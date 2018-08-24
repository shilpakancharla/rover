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

	//getting size or number of characters in string
	cout << "Size of String " << eulerGuess.size() << endl;
	cout << "Is string empty? " << eulerGuess.empty() << endl; //0 if false, 1 if true 
	cout << eulerGuess.append(" was your guess") << endl;

	string dogString = "dog";
	string catString = "cat";
	
	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl; //receives -1
	cout << catString.compare(catString) << endl;

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Kancharla", 0);
	cout << "Index for last name " << lastNameIndex << endl;

	yourName.insert(5, " Justin");
	cout << yourName << endl;

	yourName.erase(6, 7);
	cout << yourName << endl;

	yourName.replace(6, 5, "Maximus");
	cout << yourName << endl;
	
	return 0;

}