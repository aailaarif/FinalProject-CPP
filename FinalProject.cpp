
#include <string>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
using namespace std;

int oldest(Person* persons[], int size)
{
	int oldest = persons[0]->getAge();
	for (int i = 0; i < size; i++) {
		if (persons[i]->getAge() > oldest) {
			oldest = persons[i]->getAge();
		}
	}
	return oldest;
}

int main()
{
	Person p("James", 35);
	cout << p.toString() << endl;

	Student s1("Henry", 20, "CS");
	Student s2("Angel", 18, "SE");
	cout << s1.toString() << endl << s2.toString() << endl;

	Employee e("Oliver", 35, 100000);
	cout << e.toString() << endl;

	Person* persons[4];
	persons[0] = &p;
	persons[1] = &s1;
	persons[2] = &s2;
	persons[3] = &e;

	int size = 4;
	
	int theOldest = oldest(persons, size);
	cout << endl << "Oldest: " << endl;
	for (int i = 0; i < size; i++) {
		if (persons[i]->getAge() == theOldest) {
			cout << persons[i]->toString() << endl;
		}
	}
}

