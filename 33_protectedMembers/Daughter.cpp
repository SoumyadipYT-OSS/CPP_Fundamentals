#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

void Daughter::doSomething() {
	publicv = 1;
	protectedv = 2;
	// privatev = 3; // This line will cause an error
	cout << "publicv: " << publicv << endl;
	cout << "protectedv: " << protectedv << endl;
	// cout << "privatev: " << privatev << endl; // This line will cause an error
}
