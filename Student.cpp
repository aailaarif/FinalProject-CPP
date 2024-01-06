#include "Student.h"
#include <string>
using namespace std;

Student::Student(string name, int age, string major): Person(name, age)
{
	this->major = major;
}
string Student::getMajor()
{
	return major;
}
void Student::setMajor(string major)
{
	this->major = major;
}
string Student::toString()
{
	return "Name: " + this->getName() + ", age: " + to_string(this->getAge()) + ", major: " + major;
}
