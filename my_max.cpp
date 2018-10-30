#include <iostream>
//Andrew Nguyen
// could possibly do this with strings/arrays and indexing, but don't need to save all the inputs, just the Max
// Top-down processing, want the Max value to ultimately be stored and then printed out
// the number of elements is given by the user so end the loop up to the number of elements
// start the Max at 0.0 (double) so that the first entry will automatically be the Max since it is bigger than 0.0
// for loop, when counter is 1 (start) set it to the Max, and then each entry, check it with if against the Max with comparison operator

using namespace std;
int main() {
	int NumElements, counter;
	double Var;
	double Max=0.0 ;

	cout << "How many numbers do you have? " << endl;
	cin >> NumElements;
	
	for (counter = 1; (counter) <= NumElements; counter++) {
		cout << "Input number (count " << counter << ")" << endl;
		cin >> Var;

		if (counter == 1) {
			Max = Var;
		}
		// if all inputs are negative, make sure Max is not 0.0 and actually an input
	
		else if (Var > Max) {
			Max = Var;  
		}
	}
	cout << "The Maximum Value is " << Max << endl;

}
