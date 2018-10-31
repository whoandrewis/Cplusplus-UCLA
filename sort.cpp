#include <iostream>
// Dynamically allocate array onto the heap due to user-inputed size of the array
// the pointer is the name of the array 
// THIS ONE TURN IN
// Andrew Nguyen

using namespace std;
int main() {
	long n; // number of elements 

	cout << "How many numbers do you have?" << endl;
	cin >> n;
	long* arr = new long[n]; // dynamically allocate array of n size; the pointer is the name of the array

	for (long i = 0; i < n; ++i) {
		cout << "Input number (count " << (i + 1) << ")" << endl;
		cin >> arr[i];
	}

	long begin_element;
	long tempsmallest;
	long i1, i2;
	long smallest_index; // this when set to equal will get an error, but sometimes get an initilization error 

	for (i1 = 0; i1 < n;) {
		begin_element = arr[i1]; // store the beginning value to insert back into arr
		tempsmallest = arr[i1]; // store the beginning value and then change depending on comparison
		smallest_index = i1;

		for (i2 = i1; i2 < n; ++i2) {

			// traverse the array and do if comparisons
			if (arr[i2] < tempsmallest) { // if the 0th value is smaller
				tempsmallest = arr[i2];
				smallest_index = i2;
			}

		}

		arr[smallest_index] = begin_element;
		arr[i1] = tempsmallest;

		++i1;
	}

	cout << "The sorted input is: " << endl;

	for (long i3 = 0; i3 < n; ++i3) {
		cout << arr[i3] << "(count " << (i3 + 1) << ")" << endl;
	}

	delete[] arr;// memory leak if don't have this, if don't delete space will continued to be reserved while 

	return 0;
}