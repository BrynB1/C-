#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a = 2;
	double value = 2.1;
	a = value;
	cout << "Only int part in a: a=" << a << endl;
	a = static_cast<int>(value);
	cout << "Same effect as previous cast: a=" << a << endl;
	string userName;
	cout << "What is your username? ";
	getline(cin, userName);
	cout << "Username is: " << userName << endl;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Extraction failed: " << cin.fail() << endl;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Enter a int value for age:" << endl;
		cin >> age;
	}
	cout << "The valid age: " << age << endl;
	cout << "What is your mood today?" << endl;
	string mood;
	cin.ignore();
	getline(cin, mood);
	cout << "You are feeling: " << mood << endl;
	return 0;
}
