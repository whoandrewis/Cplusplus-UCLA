// Andrew Nguyen homework 6
#include "hw6.h"
#include <cmath> // can NOT use it for problem 1,2,3; can only use for Problem 4
#define PI 3.1415926535897932384626433832795028841971693993751058

// Number 1
//for loop, and multiple it over and over again, such as x^2= x*x
int ipow(int base, int exp) {
	int pow_answer = base;
	if (exp == 0) {
		return 1;
	}
	for (int i = 0; i < exp; ++i) {
		pow_answer *= base;
	}
	return pow_answer;
}

// Number 2
// declare a variable, and initialize to the first value in the arr
// loop through arr
// only update the stored variable if that value is smaller than the value at the arr index in the loop 
// should return the min value 
double my_min(double* arr, int len) {
	
	double min_ans = arr[0];
	for (int i = 0; i < len; ++i) {
		if (min_ans > arr[i]) {
			min_ans = arr[i];
		}
	}

	return min_ans;
}

//Number 3
// copy the string including the terminating null character from source to destination
// string concatenation 
char* my_strcpy(char* destination, const char* source) {
	
	for (int i = 0;; ++i) {
		destination[i] = source[i];
		if (source[i] == '\0') {
			return NULL;
		}
	}
	return NULL;
}


int my_strcmp(const char* str1, const char* str2) {
	int i = 0;
	do {
		if (str1[i] == str2[i]) {
			++i;
		}
		else if (str1[i] < str2[i]) {
			return -1;
		}
		else if (str1[i] > str2[i]) {
			return 1;
		}
	} while ((str1[i] != '\0') && (str2 != '\0'));

	return 0;
}

//Number 4
// do atan
// then convert from radians to degrees to get the answer back
// then do edge cases 
double angle(double x, double y) {
	double ans_angle;
	if ((x <0) && (y > 0)) { // if x is negative and y is positive 
		ans_angle = ((atan(y / x)) * 180 / PI) + 180;
	}
	else if ((x < 0) && (y == 0)) { // if x is negative and y is 0
		ans_angle = ((atan(y / x)) * 180 / PI) + 180;
	}
	else if ((x > 0) && (y < 0)) { // if x is positive and y is negative
		ans_angle = ((atan(y / x)) * 180 / PI) + 360;
	}
	else if ((x < 0) && (y < 0)) { // if both x and y are negtive
		ans_angle = ((atan(y / x)) * 180 / PI) + 180;
	}
	else if ((x == 0) && (y < 0)) {
		ans_angle = 270;
	}
	else if ((x == 0) && (y > 0)) {
		ans_angle = 90;
	}
	else {
		ans_angle = (atan(y / x)) * 180 / PI;
	}
	return ans_angle;
}