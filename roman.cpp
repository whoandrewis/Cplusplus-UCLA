#include <iostream>
#include <string>
// Andrew Nguyen
using namespace std;
int main() {

	unsigned int Input;
	unsigned int Thousands;
	unsigned int Hundreds;
	unsigned int Tens;
	unsigned int Ones;
	unsigned int Leftover;
	cout << "Input a number between 1 and 3999" << endl;

	cin >> Input;
	Thousands = Input / 1000; // will cause integer truncation
	Leftover = Input - (Thousands * 1000);

	Hundreds = (Leftover) / 100; // will truncate and multiple to get hundreds e.g. 5
	Leftover = Leftover - (Hundreds * 100);

	Tens = (Leftover) / 10;

	Ones = Leftover - (Tens * 10);

	// at this point have the thousands, hundreds, tens, and ones separated

	string RomanThousands;
	string RomanHundreds;
	string RomanTens;
	string RomanOnes;
	string Out;

	if (Thousands == 3) {
		RomanThousands = "MMM";
	}
	else if (Thousands == 2) {
		RomanThousands = "MM";
	}
	else if (Thousands == 1) {
		RomanThousands = 'M';
	}

	if (Hundreds == 9) {
		RomanHundreds = "CM";
	}
	else if (Hundreds == 8) {
		RomanHundreds = "DCCC";
	}
	else if (Hundreds == 7) {
		RomanHundreds = "DCC";
	}
	else if (Hundreds == 6) {
		RomanHundreds = "DC";
	}
	else if (Hundreds == 5) {
		RomanHundreds = 'D';
	}
	else if (Hundreds == 4) {
		RomanHundreds = "CD";
	}
	else if (Hundreds == 3) {
		RomanHundreds = "CCC";
	}
	else if (Hundreds == 2) {
		RomanHundreds = "CC";
	}
	else if (Hundreds == 1) {
		RomanHundreds = "C";
	}


	if (Tens == 9) {
		RomanTens = "XC";
	}
	else if (Tens == 8) {
		RomanTens = "LXXX";
	}
	else if (Tens == 7) {
		RomanTens = "LXX";
	}
	else if (Tens == 6) {
		RomanTens = "LX";
	}
	else if (Tens == 5) {
		RomanTens = 'L';
	}
	else if (Tens == 4) {
		RomanTens = "XL";
	}
	else if (Tens == 3) {
		RomanTens = "XXX";
	}
	else if (Tens == 2) {
		RomanTens = "XX";
	}
	else if (Tens == 1) {
		RomanTens = 'X';
	}


	if (Ones == 9) {
		RomanOnes = "IX";
	}
	else if (Ones == 8) {
		RomanOnes = "VIII";
	}
	else if (Ones == 7) {
		RomanTens = "VII";
	}
	else if (Ones == 6) {
		RomanOnes = "VI";
	}
	else if (Ones == 5) {
		RomanOnes = 'V';
	}
	else if (Ones == 4) {
		RomanOnes = "IV";
	}
	else if (Ones == 3) {
		RomanOnes = "III";
	}
	else if (Ones == 2) {
		RomanOnes = "II";
	}
	else if (Ones == 1) {
		RomanOnes = "I";
	}

	Out = RomanThousands + RomanHundreds + RomanTens + RomanOnes;
	cout << Out << " is your number in Roman numerals." << endl;

}