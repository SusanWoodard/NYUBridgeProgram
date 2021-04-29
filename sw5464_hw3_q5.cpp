#include <iostream>
#include <string>
using namespace std;

//1	pound is 0.453592 kilograms and 1 inch is 0.0254 meters. 
const double LBTOKG = 0.454592, INTOM = 0.0254;

int main()
{
	double weight, height, bodyMassIndex;
	string weightStatus;

	cout << "Please enter weight (in pounds): ";
	cin >> weight;
	cout << "Please enter height (in inches): ";
	cin >> height;

	bodyMassIndex = weight * LBTOKG / pow(height * INTOM, 2);

	if (bodyMassIndex < 18.5)
		weightStatus = "Underweight";
	else if (bodyMassIndex >= 18.5 && bodyMassIndex < 25)
		weightStatus = "Normal";
	else if (bodyMassIndex >= 25 && bodyMassIndex < 30)
		weightStatus = "Overweight";
	else
		weightStatus = "Obese";

	cout << "The weight status is: " << weightStatus << endl;

	return 0;
}