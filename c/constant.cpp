#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

//can also use const keyword in function or main

int main() {
	int area;
	
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	return 0;
}