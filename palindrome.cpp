#include <iostream>
using namespace std;
// Andrew Nguyen 
// isolate each of the values in the input
// use a counter to multiply based on the placement of each of the values 
// check if the reverse is the same as the input, if statement == comparison 
int main() {
	unsigned long Original;
	unsigned long Var1;
	unsigned long counter1 = 1;

	cout << "Input a nonnegative integer." << endl;
	cin >> Original;

	Var1 = Original;
	while (Var1 > 0) {
		Var1 = Var1 / 10;
		counter1 = counter1 * 10;
	}
	counter1 = counter1 / 10;

	unsigned long Var2 = Original;
	unsigned long Total = 0;
	unsigned long Var3 = 0;

	// in the counter, have the places that the first number should be at

	while (Var2 > 0) {  
		Var3 = Var2 % 10;
		Var2 = (Var2 - Var3) / 10;

		Var3 = Var3 * counter1;
		counter1 = counter1 / 10;

		Total = Total + Var3;
	}

	if (Total == Original)
		cout << Original << " is a palindromic number." << endl;
	else
		cout << Original << " is not a palindromic number." << endl;

	return 0;

}