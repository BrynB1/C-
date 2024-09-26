/*
    Bryn Bijur
    This is a fitness tracker app that gets a user's input for multiple days to store and track their exercise routine. 
    The program has all the features of the past fitness apps that are just split into multiple cpp and h files.
*/
#include <iostream>
#include <string>
#include "HealthTracker.h"

using namespace std;

int main() {
    string name;
    string gender;
    int age;
    double height;
    int historySize;

    cout << "What is your name?: ";
    getline(cin, name);

    cout << "Gender: ";
    getline(cin, gender);

    age = HealthTracker::getIntegerInput("Age: ");
    height = HealthTracker::getDoubleInput("Height (meters): ");

    historySize = HealthTracker::getIntegerInput("How many recent inputs do you want to save? ");

    HealthTracker tracker(name, gender, age, height, historySize);

    tracker.menu();

    return 0;
}
