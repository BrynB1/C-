#include "HealthData.h"
#include <iostream>

using namespace std;

HealthData::HealthData() : weight(0), exercise(""), timeOfExercise(0) {}

HealthData::HealthData(double weight, const string& exercise, int timeOfExercise)
    : weight(weight), exercise(exercise), timeOfExercise(timeOfExercise) {}

void HealthData::setWeight(double weight) {
    this->weight = weight;
}

void HealthData::setExercise(const string& exercise) {
    this->exercise = exercise;
}

void HealthData::setTimeOfExercise(int timeOfExercise) {
    this->timeOfExercise = timeOfExercise;
}

double HealthData::getWeight() const {
    return weight;
}

string HealthData::getExercise() const {
    return exercise;
}

int HealthData::getTimeOfExercise() const {
    return timeOfExercise;
}

void HealthData::print() const {
    cout << "Weight: " << weight << " kg\n";
    cout << "Exercise: " << exercise << " (" << timeOfExercise << " minutes)\n";
}
