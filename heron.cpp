#include <iostream>
#include <cmath>
/*
Andrew Nguyen
This program calculates a triangles perimeter and area based on inputted side lengths.
Could improve by verifying that a triangle's length are viable.
*/

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


