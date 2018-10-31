# include <iostream>
# include <string>
// Andrew Nguyen
// Problem 2 of Homework 4 TURN IN
// converting from hexadecimal to binary 
// could convert hexadecimal to decimal and then go from decimal to binary
// requires traversing a string 
// hexadecimal is 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

using namespace std;
int main() {

	string input;
	unsigned long value=0;
	unsigned long power = 1;
	unsigned long deci = 0;
	cout << "Enter a nonnegative hexadecimal number:" << endl;
	getline(cin, input);
	string input2;
	input2 = input.erase(0, 2); // to remove the 0x

	for (int i = 0; i < input2.length();) {

		for (int countpower1 = (input2.length() -1 - i); countpower1 > 0;) {
			power = power * 16;
			--countpower1;
		}

		if ((input2[i] >= 'A') && (input2[i] <= 'F')) {
			value = (input2[i] - 55); // 55 is the difference between ASCII 'A'=65, and 10 (what it represents in hexadecimal)
		}
		
		else {
			value = input2[i];
		}

		deci = deci + (value * power);
		power = 1;
		++i;
	}

	cout << deci << endl;

	// now have the decimal value to change into binary 

	unsigned long remainder;
	string bivalues = { '0', '1' };

	while (deci > 0) { // condition is greater than 0, otherwise once decimal=0 don't want it to run through the loop 
		remainder = deci % 2; // it's this remainder that you want printed as the binary

		if (remainder == 1) { // don't want leading 0's so start printing with the first 1
			cout << "Your number in binary is 0b" << remainder;

			while (deci > 0) {
				remainder = deci % 2;
				cout << remainder;
				deci = deci / 2;
			}

		}

		deci = deci / 2; // want it to cut off the leftover by making the variable type int, so only keep the literal 
	}

	return 0;
}