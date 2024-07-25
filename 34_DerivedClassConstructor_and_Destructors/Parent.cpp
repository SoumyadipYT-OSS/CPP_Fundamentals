#include <iostream>
#include "Parent.h"
using namespace std;

Parent::Parent() {
	cout << "I am the parent class constructor" << endl;
}

Parent::~Parent() {
	cout << "Parent deconstructor" << endl;
}
