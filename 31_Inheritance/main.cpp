/*
	Inheritance in C++:
		- Inheritance is the process by which one class acquires the properties and functionalities of another class.
		- The class that inherits the properties of another class is called the derived class.
		- The class whose properties are inherited is called the base class.
		- Inheritance is one of the most important feature of Object Oriented Programming.
*/
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main() {
	Daughter tina;
	tina.sayName();

	return 0;
}