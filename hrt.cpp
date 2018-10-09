#include <iostream> 
//Andrew Nguyen
//use the unsigned long int, print, cin
// want the input to be number of seconds
//each time would take the cin, get the value such as hours, then the remainder would be used to calculate the next variable
// years, days, hours, minutes, seconds

using namespace std;
int main() {

	unsigned long sec;
	unsigned long year;
	unsigned long day;
	unsigned long hour;
	unsigned long minute;
	unsigned long leftover;

	cout << "Input time in seconds" << endl;
	cin >> sec;
	//calculate year int take remainder to day
	year = (sec / 31536000);
	//31536000 seconds in a year
	leftover = (sec % 31536000);
	day = (leftover / 86400);
	//86400 seconds in a day
	leftover = leftover - day * 86400;
	hour = (leftover / 3600);
	//3600 seconds in an hour
	leftover = leftover - hour * 3600;
	minute = (leftover / 60);
	//60 seconds in a minute
	sec = leftover - minute * 60;

	cout << "The time is " << year << " year(s), " << day << " day(s), " << hour << " hour(s), " << minute << " minute(s) " << sec << " and second(s)." << endl;

	return 0;
}
