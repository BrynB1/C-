#pragma once

#include <string>

using namespace std;

class HealthData {
private:
    double weight;
    string exercise;
    int timeOfExercise;

public:
    HealthData();
    HealthData(double weight, const string& exercise, int timeOfExercise);

    void setWeight(double weight);
    void setExercise(const string& exercise);
    void setTimeOfExercise(int timeOfExercise);

    double getWeight() const;
    string getExercise() const;
    int getTimeOfExercise() const;

    void print() const;
};
