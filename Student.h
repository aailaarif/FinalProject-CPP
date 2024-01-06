#pragma once
#include <iostream>
#include <string>
#include <string>
#include "Person.h"
using namespace std;
class Student :public Person
{
private:
	string major;
public:
	Student(string name, int age, string major);
	string getMajor();
	void setMajor(string major);
	string toString();
};

