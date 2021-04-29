#include <iostream>
using namespace std;

int main()
{
	string status, userName;
	int userGradYear, currentYear;
	int yearInSchool;

	cout << "Please enter your name: ";
	cin >> userName;
	cout << "Please enter your graduation year: ";
	cin >> userGradYear;
	cout << "Please enter current year: ";
	cin >> currentYear;

	yearInSchool = userGradYear - currentYear;

	if (yearInSchool == 0)
		status = "senior";
	else if (yearInSchool == 1)
		status = "junior";
	else if (yearInSchool == 2)
		status = "sophmore";
	else if (yearInSchool == 3)
		status = "freshman";
	else if (yearInSchool < 0)
		status = "graduate";
	else
		status = "not in college yet";

	cout << " " << userName << ", you are a " << status << ".";

	return 0;
}