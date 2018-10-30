#include <iostream>
// Andrew Nguyen
// two conditions, the modulus of if it's even or odd 
using namespace std;
int main() {
	unsigned long input;
	unsigned long test;
	unsigned long counter1 = 0;
	unsigned long counter2 = 0;
	cout << "Enter a positive integer." << endl;
	cin >> input;
	test = input;

	while (test >= 1) { 


		if ((test % 2 == 0)) {
			test= test/2 ;
			++counter1;
			cout << "Step " << counter1 + counter2 << ": " << test << endl;
			if (test == 1) {
				break;
			}
		}

		if ((test % 2 == 1)) {
			test = test * 3 + 1;
			++counter2;
			cout << "Step " << counter1 + counter2 << ": " << test << endl;
			if (test == 1) {
				break;
			}
		}
	
	}

	cout << "Starting from " << input << " , it took " << counter1 + counter2 << " steps." << endl;

	return 0;
}