#include <iostream>
using namespace std;

//Variable declaration:
extern int a, b;
extern int c;
extern float f;

//Global variable declaration:
int g;

int main() {
	//Variable definition: 
	int a, b;
	float f;
	
	//actual initialization:
	a = 10;
	b = 20;
	g = a + b;

	cout << c << endl;

	f = 70.0/3.0;
	cout << f << endl;
	cout << g;

	return 0;
}