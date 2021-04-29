#include <iostream>
#include <string>
using namespace std;
const int HOURTOMIN = 60, DAYTOHOUR = 24;

int main() {
    string dayOfTheWeek;
    double hourStart, minuteStart, callCost;
    int lengthOfCallInMinutes;

    cout << "Please enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> dayOfTheWeek;
    cout << "Please enter the hour the long distance call started (in 24-hour format): ";
    cin >> hourStart;
    cout << "Please enter the minute the long distance call started: ";
    cin >> minuteStart;
    cout << "Please enter the length of the call in minutes: ";
    cin >> lengthOfCallInMinutes;

    if (dayOfTheWeek == "Mo" || dayOfTheWeek == "Tu" || dayOfTheWeek == "We" ||
        dayOfTheWeek == "Th" || dayOfTheWeek == "Fr") 
        {
    if (hourStart < 8 || hourStart > 18) 
        {
            callCost = 0.25 * lengthOfCallInMinutes;
        }
    else 
        {
            callCost = 0.4 * lengthOfCallInMinutes;
        }
        }
    else if (dayOfTheWeek == "Sa" || dayOfTheWeek == "Su") 
        {
        callCost = 0.15 * lengthOfCallInMinutes;
        }

    cout << "The long distance call that started at " << hourStart << ":" << minuteStart
        << " and lasted " << lengthOfCallInMinutes << " minutes, will cost " << callCost << " dollars.";

    return 0;
}