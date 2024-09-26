#include "Manager.h"
#include <iostream>
Manager::Manager()
{
	numberOfSupervisees=0;
	size=0;
	supervisees=0;
	name = "";
	id = 0;
	salary = 0;
}
Manager::Manager(string mName, int mID, double mSalary)
{
	name = mName;
	id = mID;
	salary = mSalary;
}
void Manager::assignSupervisee(Employee)
{
	return numberOfSupervisees + 1;
}
void Manager::removeSupervisee(Employee)
{
	return numberOfSupervisees - 1;
}