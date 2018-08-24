#include <iostream>
#include <vector>
#include <string>
#include <fstream>

	//functions

using namespace std;

int addNumbers(int firstNum, int secondNum = 0) {

	int combinedValue = firstNum + secondNum;

	return combinedValue;
}

int addNumbers(int firstNum, int secondNum, int thirdNum) {

	return firstNum + secondNum + thirdNum;
}


int main() {

	cout << addNumbers(1) << endl;

	cout << addNumbers(1, 5, 6) << endl;

	return 0;
}