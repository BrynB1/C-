#include "Course.h"
#include <iostream>

using namespace std;

Course::Course(string name, int capacity) : courseName(name), capacity(capacity), numberOfStudents(0) {
    students = new string[capacity];
}

Course::~Course() {
    delete[] students;
}

string Course::getCourseName() {
    return courseName;
}

void Course::addStudent(string stuName) {
    if (numberOfStudents < capacity) {
        students[numberOfStudents] = stuName;
        numberOfStudents++;
    }
    else {
        cout << "Course is full. Cannot enroll more students." << endl;
    }
}

void Course::dropStudent(string stuName) {
    int index = -1;
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i] == stuName) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < numberOfStudents - 1; i++) {
            students[i] = students[i + 1];
        }
        numberOfStudents--;
    }
    else {
        cout << stuName << " is not enrolled in this course." << endl;
    }
}

string* Course::getStudents() {
    return students;
}

int Course::getNumberOfStudents() {
    return numberOfStudents;
}

void printStudents(string* students, int size) {
    for (int i = 0; i < size; i++) {
        cout << students[i] << endl;
    }
}
