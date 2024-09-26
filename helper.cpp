#include "helper.h"
#include <iostream>
using namespace std;

const double helper::PI = 3.1415;

int helper::getIntInput()
{
	int input;
	cout << "Enter an int input: ";
	cin >> input;
	while (cin.fail())
	{
		cout << "Not an integer, please enter a new one: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}
	return input;
}