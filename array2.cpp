#include <iostream>
using namespace std;

const int students = 3;
const int games = 4;
void printMatrix(int matrix[][games], int students)
{
	for (int rIndex = 0; rIndex < students; rIndex++)
	{
		for (int cIndex = 0; cIndex < games; cIndex++)
		{
			cout << matrix[rIndex][cIndex] << "\t";
		}
		cout << endl;
	}
}
void getInputs(int matrix[][games], int students)
{
	for (int r= 0; r < students; r++)
	{
		cout << "Inputs for students" << (r + 1) << "\n";
		for (int c = 0; c < games; c++)
		{
			cout << "Input an int to represent ___ participating in the game: ";
			cin >> matrix[r][c];
		}
	}
}
int main()
{
	int matrix[students][games] = { { 1,1,1,1 }, { 2,2,0,0 } };
	cout << "element at row 1, collumn 1: " << matrix[1][1] << endl;
	cout << "first element's address: " << matrix << endl;
	cout << "second row's first element's address: " << matrix[1] << endl;
	printMatrix(matrix, students);
	getInputs(matrix, students);
	printMatrix(matrix, students);
	int total = 0;
	for (int rowIndex = 0; rowIndex < students; rowIndex++)
	{
		total += matrix[rowIndex][0];
	}
	cout << "The sum of the first collumn is: " << total << endl;
	return 0;
}