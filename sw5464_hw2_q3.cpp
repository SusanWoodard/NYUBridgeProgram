#include <iostream>
using namespace std;

int main()

{
	int johnDays, johnHours, johnMinutes;
	int billDays, billHours, billMinutes;
	//Assume an 8 hour work day.
	int totalDaysWorked, totalHoursWorked, totalMinutesWorked;
	int finalDays, finalHours, finalMinutes;
	int carryOverDays, carryOverHours;

	cout << "Please enter the number of days John has worked: ";
	cin >> johnDays;
	cout << "Please enter the number of hours John has worked: ";
	cin >> johnHours;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> johnMinutes;

	cout << "Please enter the number of days Bill has worked: ";
	cin >> billDays;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> billHours;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> billMinutes;

	totalMinutesWorked = johnMinutes + billMinutes;
	finalMinutes = totalMinutesWorked % 60;
	carryOverHours = totalMinutesWorked / 60;
	totalHoursWorked = johnHours + billHours + carryOverHours;
	finalHours = totalHoursWorked % 60;
	carryOverDays = totalHoursWorked / 60;
	totalDaysWorked = johnDays + billDays + carryOverDays;
	finalDays = totalDaysWorked;

	cout << "The total time both of them worked together is: " << finalDays << " days, " << finalHours << " hours and " << finalMinutes << " minutes.";
}