#include <iostream>
#include "Child.h"
using namespace std;

Child::Child() {
	cout << "I am the child class constructor" << endl;
}

Child::~Child() {
	cout << "Child deconstructor" << endl;
}
