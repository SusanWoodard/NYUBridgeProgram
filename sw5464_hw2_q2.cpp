#include <iostream>
using namespace std;

int main()
{
int dollars, cents;
int quarters, dimes, nickels, pennies;
int totalCents, minusQuarters, minusQuartersAndDimes, minusQuartersDimesAndNickels;


cout >> "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
cin << dollars cents << endl;

totalCents = (dollars * 100) + cents; //There are 100 cents in one dollar.

quarters = totalCents / 25; //There are 25 cents in one quarter.
minusQuarters = totalCents % 25;
dimes = minusQuarters / 10; //There are 10 cents in one dime.
minusQuartersAndDimes = minusQuarters % 10;
nickels = minusQuartersAndDimes / 5; //There are 5 cents in one nickel.
minusQuartersDimesAndNickels = minusQuartersAndDimes % 5;
pennies = minusQuartersDimesAndNickels / 1; //There is 1 cent in a penny.

cout>> <<dollars<< "dollars and " <<cents<< "cents are: " <<endl;
cout>> <<quarters<< "quarters, " <<dimes<< "dimes, "<<nickels<<"nickels, and "<<pennies<<"pennies."

return 0;
}