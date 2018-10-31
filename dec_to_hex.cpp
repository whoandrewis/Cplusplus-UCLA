#include <iostream>
#include <string>
// Andrew Nguyen
// Problem 1 of Homework 4 TURN IN
// convert decimal to hexadecimal for a nonnegative integer input (unsigned long)
// take the input and divide by base 16, the remainder would be the corresponding conversion in Hex while you keep incrementing down

using namespace std;

int main() {
	unsigned long Base10; // begin the input as an int for calculation of divisions to the remainder
	unsigned long remainder;

	string hexadecimal=""; // string of characters, conversion of the integer into a string , use the static_cast < type > (object)
	string hexvalues[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F" };

	cout << "Enter a decimal number: " << endl;
	cin >> Base10;

	if (Base10 == 16) { 
		cout << "Your number in hex is 0x10" << endl;
	}
	
	else {
		while (Base10 > 0) { // condition is greater than 0, otherwise once decimal=0 don't want it to run through the loop 

			remainder = Base10 % 16; // it's this remainder that you want convert each time
			hexadecimal = hexadecimal + hexvalues[remainder]; // each time should add the char value onto the end of the hex values 
			Base10 = Base10 / 16; // want it to cut off the leftover by making the variable type int, so only keep the literal 
		}

		cout << "Your number in hex is 0x" << hexadecimal << endl;
	}

	return 0; 

}