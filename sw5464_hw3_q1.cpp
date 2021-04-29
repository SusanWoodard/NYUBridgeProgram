#include <iostream>
using namespace std;

int main()
{
	double priceItem1, priceItem2, taxRate; 
	char clubCardStatus;
	double showBasePrice, totalPrice;
	double const BOGO = 0.5, clubMember = 0.9;
	double  afterDiscount;

	cout << "Enter price of first item: ";
	cin >> priceItem1;
	cout << "Enter price of second item: ";
	cin >> priceItem2;
	cout << "Does customer have a club card? (Y/N) ";
	cin >> clubCardStatus;
	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin >> taxRate;
	showBasePrice = priceItem1 + priceItem2;

	//Promotion #1- Buy One, Get One Half Off (BOGO)
	if (priceItem1 > priceItem2)
		afterDiscount = priceItem1 + (BOGO * priceItem2);
	else
		afterDiscount = priceItem2 + (BOGO * priceItem1);

	//Club Members get 10% off
	if clubCardStatus == y || clubCardStatus == Y
		afterDiscount *= clubMember;

	cout << "Base price: " << showBasePrice << endl;
	cout << "Price after discounts: "<<afterDiscount<< endl;
	totalPrice = afterDiscount * (1 + taxRate * 0.01);
	cout << "Total price: " <<totalPrice<< endl;

	return 0;
}