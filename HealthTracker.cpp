#include "HealthTracker.h"
#include <iostream>

using namespace std;

HealthTracker::HealthTracker(const string& name, const string& gender, int age, double height, int size)
    : name(name), gender(gender), age(age), height(height), size(size), counter(0) {
    history = new HealthData[size];
}

HealthTracker::~HealthTracker() {
    delete[] history;
}

int HealthTracker::getIntegerInput(const string& question) {
    int input;
    while (true) {
        cout << question;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
        }
        else {
            break;
        }
    }
    return input;
}

double HealthTracker::getDoubleInput(const string& question) {
    double input;
    while (true) {
        cout << question;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
        }
        else {
            break;
        }
    }
    return input;
}

void HealthTracker::input() {
    if (counter < size) {
        double weight = getDoubleInput("Weight (kg): ");
        cin.ignore();
        string exercise;
        cout << "What exercise will you be doing today?: ";
        getline(cin, exercise);
        int timeOfExercise = getIntegerInput("Exercise time (minutes): ");
        history[counter] = HealthData(weight, exercise, timeOfExercise);
        counter++;
    }
    else {
        for (int i = 0; i < size - 1; ++i) {
            history[i] = history[i + 1];
        }
        double weight = getDoubleInput("Weight (kg): ");
        cin.ignore();
        string exercise;
        cout << "What exercise will you be doing today?: ";
        getline(cin, exercise);
        int timeOfExercise = getIntegerInput("Exercise time (minutes): ");
        history[size - 1] = HealthData(weight, exercise, timeOfExercise);
    }
}

void HealthTracker::printHistory() const {
    cout << "Health Data History\n";
    cout << "------------------------\n";
    cout << name << endl;
    cout << gender << ", " << age << ", " << height << " m\n";

    for (int i = counter - 1; i >= 0; --i) {
        cout << "\nDay " << counter - i << ":\n";
        history[i].print();
    }
    cout << "------------------------\n";
}

void HealthTracker::printRecent() const {
    if (counter > 0) {
        cout << name << endl;
        cout << gender << ", " << age << ", " << height << " m\n";
        cout << "Most recent health data:\n";
        history[counter - 1].print();
    }
    else {
        cout << "No health data to print.\n";
    }
}

void HealthTracker::menu() {
    while (true) {
        cout << "\nFitness App Menu \n";
        cout << "------------------------\n";
        cout << "|1. Add Data\t\t|\n";
        cout << "|2. Print Data\t\t|\n";
        cout << "|3. Print History Data\t|\n";
        cout << "|4. Exit Application\t|\n";
        cout << "------------------------\n";

        int option = getIntegerInput("Choose an option: ");

        switch (option) {
        case 1:
            input();
            break;
        case 2:
            printRecent();
            break;
        case 3:
            printHistory();
            break;
        case 4:
            cout << "Ending the program, have a nice day!\n";
            return;
        default:
            cout << "Invalid option. Please choose a valid option.\n";
            break;
        }
    }
}
