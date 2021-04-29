#include <iostream>
#include <string>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int WHOLE_NUMBER = 3;

int main()
{
	double userRealNumber;
	int userRoundingChoice;

	cout<< "Please enter a Real number: ";
	cin>> userRealNumber;
	cout<< "Choose your rounding method: "<<endl;
	cout<< "1. Floor round"<<endl;
	cout<< "2. Ceiling round"<<endl;
	cout<< "3. Rount to the nearest whole number"<<endl;
	cin>> userRoundingChoice;
	
	switch (userRoundingChoice)
	{
	case FLOOR_ROUND:
		userRealNumber = floor(userRealNumber);
		break;
	case CEILING_ROUND:
		userRealNumber = ceil(userRealNumber);
		break;
	case WHOLE_NUMBER:
		userRealNumber = round(userRealNumber);
		break;
	}

	cout << userRealNumber;

	return 0;
}