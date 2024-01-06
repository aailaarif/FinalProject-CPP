#include "Person.h"
using namespace std;
#include <string>
#include <iostream>
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}
string Person::getName()
{
	return name;
}
void Person::setName(string name)
{
	this->name = name;
}
int Person::getAge()
{
	return age;
}
void Person::setAge(int age)
{
	this->age = age;
}
string Person::toString()
{
	return "Name: " + name + ", age: " + to_string(age);
}