#include<iostream>;
using namespace std;
int main() {
	int num;
	cout << "Please enter a positive int: ";
	while (cin.fail() || num <= 0)
	{
		cout << "Input invalid! Try again: ";
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
			}
		cin >> num;
	}
	cout << "Valid positive int: " << num << endl;
}
