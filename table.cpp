#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int const PI = 3.14;
	int degrees = 30;
	double radians = degrees * PI / 180;
	double sine = sin(radians);
	double cosine = cos(radians);
	double tangent = tan(radians);
	cout << left;
	cout << setw(9) << "Degrees" << setw(9) << degrees << setw(9) << "Radians" << setw(9) << radians << setw(9) << "Sine" << setw(9) << sine << setw(9) << "Cosine" << setw(9) << cosine << setw(9) << "Tangent" << tangent << endl;
}
