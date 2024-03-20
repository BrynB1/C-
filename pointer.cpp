#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* pA, int* pB)
{
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
}

int main()
{
	int a = 10;
	cout << "a's address: " << &a << endl;
	cout << "a's value: " << a << endl;
	int* pInt;
	pInt = &a;
	cout << "pInt = " << pInt << endl;
	cout << "Getting the value of the pointer: " << *pInt << endl;
	a = 20;
	cout << "a=" << a << ", using a pointer: " << *pInt << endl;
	*pInt = 40;
	cout << "a=" << a << ", using a pointer: " << *pInt << endl;
	cout << "\n";

	double b = 0.1;
	// Data type doesn't match 
	// double* pDouble = &a;
	double* pDouble = &b;
	int x = 5, y = 6;
	int* pX, *pY;
	pX = &x, pY = &y;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "\n";
	cout << "Pointer Addresses:" << endl;
	cout << "pX = " << pX << "\tpY = " << pY << endl;
	cout << "Pointer Values:" << endl;
	cout << "*pX = " << *pX << "\t*pY = " << *pY << endl;
	cout << "Original Values:" << endl;
	cout << "x = " << x << "\ty = " << y << endl;
	cout << "Original Addresses:" << endl;
	cout << "x = " << &x << "\ty = " << &y << endl;
	*pX = *pY;
	cout << "Changing x's value to y's value: x=" << x << ", y=" << y << endl;
	double array[] = { 0.1, 0.2, 0.3, 0.4 };
	cout << "1st element's address: " << array << endl;
	cout << "1st element's value: " << array[0] << endl;
	cout << "1st element value: " << *array << endl;
	cout << "2nd element address: " << &array[1] << endl;
	cout << "2nd element address: " << (array+1) << endl;
	cout << "2nd element value: " << *(array + 1) << endl;
	cout << "2nd element value without (): " << *array + 1 << endl;
	cout << "2nd element value: " << *(&array[1]) << endl;
	pDouble = array;
	for (int index = 0; index < 4; index++)
	{
		cout << "element's address: " << (pDouble + index) << endl;
		cout << "element's value: " << pDouble[index] << endl;
	}
	//Second element
	pDouble++; 
	cout << "2nd element's value: " << *pDouble << endl;
	//Third element
	pDouble = pDouble + 1; 
	cout << "3rd element's value: " << *pDouble << endl;
	return 0;
}