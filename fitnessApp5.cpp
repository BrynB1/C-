/*
    Bryn Bijur
    This is a personal fitness app that takes user inputs.
    It uses functions to store data for up to 7 days and switch cases to let the user decide what the app should do.
*/

#include <iostream>
#include <string>

using namespace std;

const int historySize = 7;

struct FitnessData {
    double weight;
    string exercise;
    int timeOfExercise;
};

int getIntegerInput(const string& question)
{
    int input;
    while (true)
    {
        cout << question;
        cin >> input;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
        }
        else
        {
            break;
        }
    }

    return input;
}

double getDoubleInput(const string& question)
{
    double input;
    while (true)
    {
        cout << question;
        cin >> input;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a numeric value.\n";
        }
        else
        {
            break;
        }
    }

    return input;
}

void getBasicInfo(string& name, string& gender, int& age, double& height)
{
    cout << "What is your name?: ";
    getline(cin, name);

    cout << "Gender: ";
    getline(cin, gender);
    age = getIntegerInput("Age: ");
    height = getDoubleInput("Height (meters): ");
}

void printMenu()
{
    cout << "\nFitness App Menu \n";
    cout << "------------------------\n";
    cout << "|1. Add Data\t\t|\n";
    cout << "|2. Print Data\t\t|\n";
    cout << "|3. Print History Data\t|\n";
    cout << "|4. Exit Application\t|\n";
    cout << "------------------------\n";
}

int selectMenu()
{
    int option;
    while (true)
    {
        printMenu();
        cout << "Choose an option: ";
        option = getIntegerInput("");

        if (option >= 1 && option <= 4)
        {
            break;
        }
        else
        {
            cout << "Invalid option. Please choose a valid option.\n";
        }
    }

    return option;
}

void inputData(double& weight, string& exercise, int& timeOfExercise)
{
    cout << "What exercise will you be doing today?: ";
    cin.ignore();
    getline(cin, exercise);

    timeOfExercise = getIntegerInput("Exercise time (minutes): ");
    weight = getDoubleInput("Weight (kg): ");
}

void printData(const string& name, const string& gender, int age, double height, double weight, const string& exercise, int timeOfExercise)
{
    cout << name << endl;
    cout << gender << ", " << age << ", " << height << " m\n";
    cout << "Weight: " << weight << " kg\n";
    cout << "Exercise: " << exercise << " (" << timeOfExercise << " minutes)\n";
}

void printHistoryData(const string& name, const string& gender, int age, double height, const FitnessData historyData[], int dataSize)
{
    if (dataSize == 0)
    {
        cout << "No fitness data to print.\n";
        return;
    }

    cout << "\nFitness Data History\n";
    cout << "------------------------\n";
    cout << name << endl;
    cout << gender << ", " << age << ", " << height << " m\n";

    int printCount = min(dataSize, historySize);
    for (int i = dataSize - printCount; i < dataSize; ++i)
    {
        const FitnessData& data = historyData[i];
        cout << "\nDay " << i + 1 << ":\n";
        cout << "Weight: " << data.weight << " kg\n";
        cout << "Exercise: " << data.exercise << " (" << data.timeOfExercise << " minutes)\n";
    }
    cout << "------------------------\n";
}

int main()
{
    string name;
    string gender;
    int age;
    double height;
    double weight;
    string exercise;
    int timeOfExercise;

    bool hasData = false;
    FitnessData historyData[historySize];
    int dataSize = 0;

    getBasicInfo(name, gender, age, height);

    while (true)
    {
        int option = selectMenu();

        switch (option)
        {
        case 1:
            // Add Data
            inputData(weight, exercise, timeOfExercise);
            hasData = true;

            // Store in history data
            historyData[dataSize] = { weight, exercise, timeOfExercise };
            dataSize++;

            // Keep only the last 7 entries
            if (dataSize > historySize)
            {
                for (int i = 0; i < dataSize - 1; ++i)
                {
                    historyData[i] = historyData[i + 1];
                }
                dataSize--;
            }
            break;

        case 2:
            // Print Data
            if (hasData)
            {
                printData(name, gender, age, height, weight, exercise, timeOfExercise);
            }
            else
            {
                cout << "There is no fitness data to print.\n";
            }
            break;

        case 3:
            // Print History Data
            printHistoryData(name, gender, age, height, historyData, dataSize);
            break;

        case 4:
            // Exit Application
            cout << "Ending the program, have a nice day!\n";
            return 0;

        default:
            cout << "Invalid option. Please choose a valid option.\n";
            break;
        }
    }
    return 0;
}
