#include <iostream>
using namespace std;

void initialize(int* p, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		p[i] = value;
	}
}

void print(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << '\t';
	}
	cout << endl;
}

int* appendElement(int* p, int& size, int value)
{
	int* array = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		array[i] = p[i];
	}
	array[size] = value;
	size++;
	delete[] p;

	return array;
}

int* insertElement(int* p, int& size, int value, int index)
{
	int* A = new int[size + 1];
	for (int i = 0; i < index; i++)
	{
		A[i] = p[i];
	}
	A[index] = value;
	for (int i = index; i < size; i++)
	{
		A[i + 1] = p[i];
	}
	size++;
	delete[] p;
	return A;
}

int* deleteFirstElement(int* p, int& size) {
	int* p1 = new int[--size];

	for (int i = 1; i < (size + 1); i++) {
		p1[i - 1] = p[i];
	}

	delete[] p;

	return p1;

}

int* deleteElement(int* p, int& size, int index) {
	int* p1 = new int[--size];

	for (int i = 0; i < index; i++) {
		p1[i] = p[i];
	}
	for (int i = index; i < size; i++) {
		p1[i] = p[i + 1];
	}

	delete[] p;

	return p1;

}



int main()
{
	cout << "Enter list size: ";
	int size;
	cin >> size;
	int* A = new int[size];
	int value = 0;
	cout << "Initial value for all elements in the list: ";
	cin >> value;
	initialize(A, size, value);
	cout << "All elements initialized as " << value << endl;
	print(A, size);
	int newValue = 0;
	cout << "Appended value: ";
	cin >> newValue;
	A = appendElement(A, size, newValue);
	cout << "After appending " << newValue << endl;
	print(A, size);

	int index = 0;
	cout << "The index of the element to be added: ";
	cin >> index;
	cout << "Inserted value: ";
	cin >> newValue;
	A = insertElement(A, size, newValue, index);
	cout << "After adding the element at " << index << endl;
	print(A, size);
	A = deleteFirstElement(A, size);
	cout << "After deleting the first element:\n";
	print(A, size);
	cout << "The index of the element to be deleted: ";
	cin >> index;
	A = deleteElement(A, size, index);
	cout << "After deleting the element at " << index << endl;
	print(A, size);
	delete[] A;


}