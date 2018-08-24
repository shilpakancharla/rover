#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	vector <int> lotteryNumVector(10); //type vector and data type you want to store

	//how to put an array in a vector

	int lotteryNumArray[5] = {4, 13, 14, 24, 34}; 

	lotteryNumVector.insert(lotteryNumVector.begin(), lotteryNumArray, lotteryNumArray+3);

	lotteryNumVector.insert(lotteryNumVector.begin()+5, 44);

	cout << lotteryNumVector.at(5) << endl;
		
	lotteryNumVector.push_back(64);

	cout << "Final Value " << lotteryNumVector.back() << endl;

	cout << "First Value " << lotteryNumVector.front() << endl;

	cout << "Is empty? " << lotteryNumVector.empty() << endl; //will return 0 if vector is not empty

	cout << "Size " << lotteryNumVector.size() << endl;

	lotteryNumVector.pop_back();

	return 0;

}