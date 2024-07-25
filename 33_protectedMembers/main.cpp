#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main() {
	Mother mom;
	Daughter tina;
	mom.publicv = 1;
	// mom.protectedv = 2; // This line will cause an error because protectedv is protected
	// mom.privatev = 3; // This line will cause an error because privatev is private
	tina.doSomething();
	return 0;
}
