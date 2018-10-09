#include <iostream>
#include <cmath>
/*
Andrew Nguyen
This program calculates a triangles perimeter and area based on inputted side lengths.
Could improve by verifying that a triangle's length are viable.
*/

// need to declare 3 variables and then get user input into those 3 variables
// declare variables at begining of main function
// area would be the calculation of the 3 variables 
// name file heron.cpp
// no push operator and endl for cin

using namespace std;
	int main() {
		double firstside;
		double secondside;
		double thirdside;
		double peri;
		double area;

		cout << "What is the length of the first side?" << endl;
		cin >> firstside; 

		cout << "What is the length of the second side?" << endl;
		cin >> secondside;

		cout << "What is the length of the third side?" << endl;
		cin >> thirdside; 

		peri = (firstside + secondside + thirdside) / 2;
		area = sqrt(peri*(peri - firstside) * (peri - secondside) * (peri - thirdside));
		cout << "The area of the triangle is "<< area << endl;

		return 0;
	}


