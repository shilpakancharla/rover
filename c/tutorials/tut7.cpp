#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

	string steveQutoe = "A day without sunshine is like, you know, night";

	ofstream writer("stevequote.txt");

	if(! write) {
		cout << "Error opening file" << endl;
		return -1;
	} else {
		writer << steveQuote << endl;
		writer.close();
	}

	ofstream writer2("steverquote.txt", ios::app);

	// Open a stream to append to whats there with ios::app
	// ios::binary : Treat the file as binary
	// ios::in : Open a file to read input
	// ios::trunc : Default
	// ios::out : Open a file to write output

	return 0;

}