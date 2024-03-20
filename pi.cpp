#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.141592653;
	cout << "Default display for floating point values: " << PI << endl;
	cout << "Default display: " << 0.1 * PI << endl;
	cout << setprecision(4);
	cout << "Round and show 4 digits: ";
	cout << PI << "/" << 0.1 * PI << endl;
	cout << "Display floating point values using only 2 decimal places: " << endl;
	cout << fixed << setprecision(2);
	cout << PI << " " << 0.1 * PI << " " << endl;
	cout << "Python\t" << "2023 Spring\n";
	cout << "Java\t" << "2024 Fall\n";
	cout << "C++\t" << "2024 Spring\n";
	cout << "Display the table with values alligned to the right:\n";
	cout << setw(7) << "Python" << setw(12) << "2023 Spring" << endl;
	cout << setw(7) << "Java" << setw(12) << "2024 Fall" << endl;
	cout << setw(7) << "C++" << setw(12) << "2024 Spring" << endl;
	cout << "computed PI: " << acos(-1.0) << endl;
	int degrees = 30;
	double radians = degrees * PI / 180;
	double sine = sin(radians);
	double cosine = cos(radians);
	double tangent = tan(radians);
	cout << sine << endl;
	cout << cosine << endl;
	cout << tangent << endl;
	return 0;
}
