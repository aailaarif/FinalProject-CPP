#pragma once
using namespace std;
#include <string>
class Person
{
private:
	string name;
	int age;
public:
	Person(string name, int age);
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	string virtual toString();
};

