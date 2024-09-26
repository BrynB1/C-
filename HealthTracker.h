#pragma once

#include <string>
#include "HealthData.h"

using namespace std;

class HealthTracker {
private:
    string name;
    string gender;
    int age;
    double height;
    int size;
    HealthData* history;
    int counter;

public:
    HealthTracker(const string& name, const string& gender, int age, double height, int size);
    ~HealthTracker();

    static int getIntegerInput(const string& question);
    static double getDoubleInput(const string& question);

    void input();
    void printHistory() const;
    void printRecent() const;
    void menu();
};
