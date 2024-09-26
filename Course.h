#pragma once

#include <string>

using namespace std;

class Course {
private:
    string courseName;
    string* students;
    int capacity;
    int numberOfStudents;

public:
    Course(string name, int capacity);
    ~Course();
    string getCourseName();
    void addStudent(string stuName);
    void dropStudent(string stuName);
    string* getStudents();
    int getNumberOfStudents();
};

void printStudents(string* students, int size);
