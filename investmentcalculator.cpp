#include <iostream>
#include <cmath>
using namespace std;

// Function
int numberOfYears(double accountBalance, double interestRate, double investmentGoal) {
    int years = 0;

    while (accountBalance < investmentGoal) {
        accountBalance *= (1 + interestRate / 100);
        years++;
    }

    return years;
}

// Modified function 
int numberOfYears2(double& accountBalance, double interestRate, double investmentGoal) {
    int years = 0;

    while (accountBalance < investmentGoal) {
        accountBalance *= (1 + interestRate / 100);
        years++;
    }

    return years;
}

int main() {
    // Get user input
    double initialBalance, interestRate, investmentGoal;
    cout << "Enter the current balance: ";
    cin >> initialBalance;
    cout << "Enter the interest rate per year: ";
    cin >> interestRate;
    cout << "Enter the investment goal: ";
    cin >> investmentGoal;

    // Call the function
    int years = numberOfYears(initialBalance, interestRate, investmentGoal);

    //Print
    cout << "It will take " << years << " years to reach the investment goal." << endl;
    cout << "Initial balance after function call: $" << initialBalance << endl;
    numberOfYears2(initialBalance, interestRate, investmentGoal);
    cout << "Updated balance after function call: $" << initialBalance << endl;
    return 0;
}
