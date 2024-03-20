#include <iostream>
using namespace std;

const int COLUMN_SIZE = 3;
void initialMatrix(int myMatrix[][COLUMN_SIZE], int rowSize)
{
	for (int rowSize = 0; rowSize < rowSize; rowSize++)
	{
		for (int COLUMN_SIZE = 0; COLUMN_SIZE < COLUMN_SIZE; COLUMN_SIZE++)
		{
			cout << "Enter an int: ";
			cin >> myMatrix[rowSize][COLUMN_SIZE];
		}
	}
}
void sumOfColumn(const int myMatrix[][COLUMN_SIZE], int rowSize, int sums[])
{	
	int sum;
	for (int c = 0; c < COLUMN_SIZE; c++) {
		sum = 0;
		cout << "Column " << c << endl;
		for (int r = 0; r < rowSize; r++) {
			sum += myMatrix[r][c];
		}
		myMatrix[c] = sum;
	}
}
void printMatrix(int myMatrix[][COLUMN_SIZE], int rowSize)
{
	for (int rIndex = 0; rIndex < rowSize; rIndex++)
	{
		for (int cIndex = 0; cIndex < COLUMN_SIZE; cIndex++)
		{
			cout << myMatrix[rIndex][cIndex] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	cout << "The matrix is:\n";
	cout << "The collumn sums are: " << endl;
	cout << "The largest column sum is: " << endl;

	int myMatrix[][COLUMN_SIZE]
	initialMatrix(myMatrix);
	printMatrix(myMatrix);
	return 0;
}