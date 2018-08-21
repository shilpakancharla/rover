#include <iostream>

using namespace std;

int main () {
	
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

	cout << "Greeting message: ";
	cout << greeting << endl;

	return 0;
}

//Functions
//strcpy(s1, s2); (copies string s2 into string s1)
//strcat(s1, s2); (concatenates string s2 onto the end of string s1)
//strlen(s1); (returns the length of string s1)
//strcmp(s1, s2); (returns 0 if s1 and s2 are the same; less than 0 if s1 < s2; greater than 0 if s1 > s2)
//strchr(s1, ch); (returns a pointer to the first occurrence of character ch in string s1)
//strstr(s1, s2); (returns a pointer to the first occurrence of string s2 in string s1)