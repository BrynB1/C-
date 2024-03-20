#include <iostream>
using namespace std;

int main()
{
	int operand1 = 20;
	int operand2 = 3;
	cout << "Addition: " << operand1 << " + " << operand2 << " = " << operand1 + operand2 << endl;
	cout << "Subtraction: " << operand1 << " - " << operand2 << " = " << operand1 - operand2 << endl;
	cout << "Multiplication: " << operand1 << " * " << operand2 << " = " << operand1 * operand2 << endl;
	cout << "Division: " << operand1 << " / " << operand2 << " = " << operand1 / operand2 << endl;
	cout << "Remainder : " << operand1 << " % " << operand2 << " = " << operand1 % operand2 << endl;
	double doubleVal = operand1;
	cout << "Real division: " << doubleVal / operand2 << endl;
	cout << "Real division again: " << (double)operand1 / operand2 << endl;
	cout << "Operand1 is not changed: " << operand1 << endl;
	cout << "x=4, y=10 a,b,c=2" << endl;
	int x = 4;
	int y = 10;
	int a = 2, b = 2, c = 2;
	cout << ("3+4x/5 - 10(y-5)(a+b+c)/x + 9(4/x+(+x/y))") << endl;
	cout << (3 + 4 * x) / 5 - 10 * (y - 5) * (a + b + c) / x + 9 * (4 / x + (9 + x) / y) << endl;
	cout << operand1++ << endl; //operand1 = operand1+1;
	operand1 += 2 * 4;
	cout << operand1 << endl;
	int negativeValue = -10;
	int absoluteValue = negativeValue < 0 ? -1 * negativeValue : negativeValue;
	cout << "Absolute value of -10: " << absoluteValue << endl;
	cout << "Input an integer: ";
	cin >> negativeValue;
	cout << "You typed in: " << negativeValue << endl;
	return 0;
}
