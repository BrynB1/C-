#pragma once
#include <string>
#include "Employee.h"
using namespace std;

class Manager: public Employee
{
private:
	int numberOfSupervisees;
	int size;
	Employee* supervisees;
public:
	Manager(string mName, int mID, double mSalary, int maxNumberOfSupervisees);
	{
		this->size = maxNumberOfEmployees();
		this->
	}
	Manager();
	int getNumberOfSupervisees;
	Employee* getSupervisees;
	void assignSupervisee(Employee);
	void removeSupervisee(Employee);
	string toString()
	{
		string s =Employee
	}
};

