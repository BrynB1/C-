#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void displayUserInfo(const string& name, int age);
int largest(int a, int b)
{
    return (a > b) ? a : b;
}
//Override largest function with two double parameters
double largest(double a, double b)
{
    double result;
    {
        if (a > b)
            result = a;
        else
            result = b;
        return result;
    }
}

void formatRow(int degrees, string align = "right", int precision = 2, int width = 10)
{
    double radians = 3.1415 * degrees / 180;
    double sines = sin(radians);
    double cosines = cos(radians);
    double tangents = tan(radians);

    cout << fixed << setprecision(precision);

    if (align == "left")
    {
        cout << left;
    }
    else if (align == "right")
    {
        cout << right;
    }

    cout << setw(width) << degrees << setw(width) << sines << setw(width) << cosines << setw(width) << tangents << endl;
}

int getIntInput()
{
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter a valid int: ";
        cin >> input;
    }
    return input;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    displayUserInfo("Bryn Bijur", 21);
    cout << "The largest value is: " << largest(3.4, 7.2) << endl;
    cout << "The largest value is: " << largest(3, 7) << endl;
    formatRow(30);
    formatRow(30, "left", 4);
    formatRow(30, "left", 4, 10);
    formatRow(60, "left", 4, 10);

    int num1 = getIntInput();
    int num2 = getIntInput();

    int result = largest(num1, num2);
    cout << "The largest number is: " << result << endl;

    cout << endl;

    cout << "Before the swap: " << num1 << " and " << num2 << endl;
    swap(num1, num2);
    cout << "After the swap: " << num1 <<" and " << num2 << endl;

    int refVar = num1;
    cout << endl;
    cout << "Demo for reference variables:\n";
    cout << "refVar=" << refVar << ", num1=" << num1 << endl;

    num1 += 10;
    refVar = refVar - 10;

    cout << "refVar=" << refVar << ", num1=" << num1 << endl;

    return 0;
}
void displayUserInfo(const string& name, int age)
{
    cout << "Name: " << name << "\nAge: " << age << endl;
    //name can't be changed  
}