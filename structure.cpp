#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Person
{
    string name;
    string age;
};

struct Student
{
    int id;
    int year;
    Person basic;
    double gpa;
};

void printStudent(const Student& s)
{
    cout << "Name: " << s.basic.name << " Age: " << s.basic.age << " ID: " << s.id << " Year: " << s.year << " GPA: " << fixed << setprecision(2) << s.gpa << endl;
}

void getInfo(Student& s)
{
    cout << "What is the name? ";
    getline(cin, s.basic.name);

    cout << "What is the ID? ";
    cin >> s.id;

    cin.ignore();  // Clear the input buffer

    cout << "Age? ";
    getline(cin, s.basic.age);

    cout << "GPA? ";
    cin >> s.gpa;

    cout << "What is your year? ";
    cin >> s.year;
}

Student getInfo()
{
    Student s;

    cout << "What is the name? ";
    getline(cin, s.basic.name);

    cout << "What is the ID? ";
    cin >> s.id;

    cin.ignore();  // Clear the input buffer

    cout << "Age? ";
    getline(cin, s.basic.age);

    cout << "GPA? ";
    cin >> s.gpa;

    cout << "What is your year? ";
    cin >> s.year;

    return s;
}

int main()
{
    Student john{ 1, 1, {"John", "20"}, 0 };
    cout << "Test: " << john.basic.name << " " << john.id << endl;
    cout << "John's Info:" << endl;
    printStudent(john);
    cout << "John's Address: " << &john << endl;
    cout << "First field's address: " << &(john.id) << endl;
    cout << "Second field address: " << &(john.year) << endl;

    // Student anna = getInfo();
    Student anna;
    getInfo(anna);
    printStudent(anna);

    Student students[2] = { john, anna };
    for (int i = 0; i < 2; i++)
    {
        printStudent(students[i]);
    }

    Student* pStudent = &john;
    cout << "Refer to id of john: " << (*pStudent).id << endl;
    cout << "Shorthand way: " << pStudent->id << endl;

    cout << "How many students are in the class?: ";
    int size;
    cin >> size;
    pStudent = new Student[size];
    cin.ignore();  // Clear the input buffer
    for (int i = 0; i < size; i++)
    {
        getInfo(pStudent[i]);
    }

    cout << "All students: \n";
    for (int i = 0; i < size; i++)
    {
        printStudent(pStudent[i]);
    }

    delete[] pStudent;
    return 0;
}
