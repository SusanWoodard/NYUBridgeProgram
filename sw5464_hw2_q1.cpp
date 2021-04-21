#include <iostream>
using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies;
	int totalCents, totalDollars, finalCents;
		
	cout<<"Please enter the number of coins:"<<endl;
	cout<<"# of quarters: "<<endl;
	cin>> quarters;
	cout<<"# of dimes: "<<endl;
	cin>> dimes;
	cout<<"# of nickels: "<<endl;
	cin>> nickels;
	cout<<"# of pennies: "<<endl;
	cin>> pennies;

	totalCents = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies * 1);
	totalDollars = totalCents / 100;
	finalCents = totalCents % 100;

	cout<<"The total is " <<totalDollars<< " dollars and "<<finalCents<< " cents." <<endl;

	return 0;
}