#include <iostream>
using namespace std;

void printArray(double array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << '\t';
    }
    cout << endl;
}

void add10(double array[], int value)
{
    array[0] = array[0] + 10;
    value += 10;
}

void getweights(double weights[], int days)
{
    for (int day = 0; day < days; day++)
    {
        cout << "What is your weight for day " << day + 1 << "? ";
        cin >> weights[day];
    }
}

double largestValueinArray(const double array[], int size)
{
    double result = array[0];
    for (int index = 1; index < size; index++)
    {
        if (result < array[index])
        {
            result = array[index];
        }
    }
    return result;
}

void reverse(const double original[], double reversed[], int size)
{
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        reversed[j] = original[i];
    }
}

void reverse(double array[], int size)
{
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        double temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }
}

void shiftArrayToLeft(double array[], int size)
{
    for (int index = 0; index < size - 1; index++)
    {
        array[index] = array[index + 1];
    }
}

int main()
{
    double hardcodedWeights[7] = { 1, 3, 5, 6, 6 };
    const int size = 7;
    double userWeights[size] = { 0 };

    cout << "Hardcoded weights array:" << endl;
    printArray(hardcodedWeights, size);

    cout << "User input weights array:" << endl;
    printArray(userWeights, size);

    getweights(userWeights, size);
    printArray(userWeights, size);
    double reversedArray[size];
    reverse(userWeights, reversedArray, size);

    cout << "Reversed user input weights array:" << endl;
    printArray(reversedArray, size);

    cout << "Reversed in place without a new array:" << endl;
    reverse(userWeights, size);
    printArray(userWeights, size);

    double largestElementHardcoded = largestValueinArray(hardcodedWeights, size);
    cout << "The largest weight in the hardcoded array is: " << largestElementHardcoded << endl;

    double largestElementUserInput = largestValueinArray(userWeights, size);
    cout << "The largest weight in the user input array is: " << largestElementUserInput << endl;

    cout << "Enter your weight for day 8: ";
    shiftArrayToLeft(userWeights, size);
    cin >> userWeights[size - 1];
    printArray(userWeights, size);
    return 0;
}
