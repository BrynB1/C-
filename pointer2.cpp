#include <iostream>
using namespace std;
void swap(int* pA, int* pB)
{
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
}
void print(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << '\t';
		//cout << *(array+i)<< '\t';
	}
	cout << "\n";
}
void getGrades(int* array, int size)
{
	cout << "Please enter grades for all students. \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Grade: ";
		cin >> *(array + i); //array[i]
	}
}
int* reverseUsingPointer(const int* original, int size)
{
	int* reverseArray = new int[size];
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		reverseArray[j] = original[i];
	}
	return reverseArray;
}
int main()
{
	int a = 5, b = 6;
	cout << "Before swap: a=" << a << " b=" << b << endl;
	swap(&a, &b);
	cout << "After swap: a=" << a << " b=" << b << endl;
	int grades[3] = { 1,2,3 };
	print(grades, 3);
	int* size = new int;
	cout << "How many students are in the class? ";
	cin >> *size;
	int* p = new int[*size];
	getGrades(p, *size);
	print(p, *size);
	cout << "Reverse function:\n";
	int*result = reverseUsingPointer(p, *size);
	print(result, *size);
	
	delete[] result;
	delete[] p;
	delete size;

	result = NULL;
	p = NULL;
	size = NULL;
	return 0;
}