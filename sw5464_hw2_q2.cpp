#include <iostream>
using namespace std;

int main()
{
	int dollars, cents = 0;
	int quarters, dimes, nickels, pennies;
	int totalCents, minusQuarters, minusQuartersAndDimes, minusQuartersDimesAndNickels;

	cout << "Pleaes enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> dollars;
	cin >> cents;

	totalCents = (dollars * 100) + cents;

	quarters = totalCents / 25; //Quarters are worth 25 cents
	minusQuarters = totalCents % 25;
	dimes = minusQuarters / 10; //Dimes are worth 10 cents
	minusQuartersAndDimes = minusQuarters % 10;
	nickels = minusQuartersAndDimes / 5; //Nickels are worth 5 cents
	minusQuartersDimesAndNickels = minusQuartersAndDimes % 5;
	pennies = minusQuartersDimesAndNickels / 1; //Pennies are worth 1 cent

	cout << dollars << " dollars and " << cents << " cents are: " << endl;
	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies.";

	return 0;
}
