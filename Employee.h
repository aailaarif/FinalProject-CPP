#pragma once
using namespace std;
#include <string>
#include "Person.h"
class Employee:public Person
{
private:
	double salary;
public:
	Employee(string name, int age, double salary);
	double getSalary();
	void setSalary(double salary);
	string toString();
};

