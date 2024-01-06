#include "Employee.h"
#include "Person.h"
Employee::Employee(string name, int age, double salary):Person(name, age)
{
	this->salary = salary;
}
double Employee::getSalary()
{
	return salary;
}
void Employee::setSalary(double salary)
{
	this->salary = salary; 
}
string Employee::toString()
{
	return "Name: " + this->getName() + ", age: " + to_string(this->getAge()) + ", salary: " + to_string(salary);
}