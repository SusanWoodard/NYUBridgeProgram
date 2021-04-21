#include <iostream>
using namespace std;

int main()
{
	int integerOne, integerTwo;
	int sum, difference, product, quotientWholeNumber, quotientRemainder;
	double quotientDecimal;

	cout << "Please enter two positive integers, separated by a space: ";
	cin >> integerOne;
	cin>> integerTwo;

	sum = integerOne + integerTwo;
	cout << integerOne;
	cout << " + ";
	cout << integerTwo;
	cout << " = ";
	cout<<sum<< endl;

	difference = integerOne - integerTwo;
	cout << integerOne;
	cout << " - ";
	cout << integerTwo;
	cout << " = ";
	cout << difference<< endl;

	product = integerOne * integerTwo;
	cout << integerOne;
	cout << " * ";
	cout << integerTwo;
	cout << " = ";
	cout<< product<< endl;

	quotientDecimal = integerOne / integerTwo;
	cout << integerOne;
	cout << " / ";
	cout << integerTwo;
	cout << " = ";
	cout << quotientDecimal<< endl;
	
	quotientWholeNumber = integerOne / integerTwo;
	cout << integerOne;
	cout << " div ";
	cout << integerTwo;
	cout << " = ";
	cout << quotientWholeNumber<< endl;
	
	quotientRemainder = integerOne % integerTwo;
	cout << integerOne;
	cout << " mod ";
	cout << integerTwo;
	cout << " = ";
	cout << quotientRemainder<< endl;
	
	return 0;
}