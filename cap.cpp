#include <iostream>
#include <string>
// Andrew Nguyen 
// Number 3 of Homework 4 TURN IN
using namespace std;

int main() {
	string input; // strings end with \0 character
	cout << "Input a sentence: " << endl;

	getline(cin, input);
	int difference = 'a' - 'A';  //  difference between uppercase and lowercase; add to go from upper to lower; subtract to go from lower to upper
	int i = 0;

	while(input[i] != '\0') { // strings end with the '\0' so use as a condition when to stop iterations 

		// first letter evaluation, 3 if branches: first letter is lowercase, first is uppercase, else is if spaces

		if ((input[i] >= 'a') && (input[i] <= 'z')) {
			// case that a string starts with a lower case letter
			input[i] = input[i] - difference;
			++i;
			// now want each preceeding letter to be lowercase

			for (i; input[i] != '\0'; ++i) {
				if ((input[i] >= 'A') && (input[i] <= 'Z')) { // if the next letter is capital, make it lowercase 
					input[i] = input[i] + difference; // if uppercase, add difference to make it lower because it's not the first
				}
				else if (input[i] == ' ') {
					++i;
					break;
				}


			}


		}

		else if ((input[i] >= 'A') && (input[i] <= 'Z')) {
			// case that the string starts with an uppercase letter 
			++i;
			// evaluate next letters to make sure rest is lowercase, break/exit once hit a space
			for (i; input[i] != '\0'; ++i) {
				if ((input[i] >= 'A') && (input[i] <= 'Z')) {  // if the next letter is capital, make it lowercase 
					input[i] = input[i] + difference; // to make a capital letter lowercase 
				}
				else if (input[i] == ' ') {
					++i;
					break;
				}


			}
		}

		else
			// case that the string does not start with a letter (ex: spaces or number) then just increment i to keep checking and re-evaluate previous two if statements
			++i;
	}

	cout << input << endl;

	return 0;
}