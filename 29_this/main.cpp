// this concept in C++
/*
	'this' is a pointer that points to the object that called the function.
	It is used to access the object's members.
*/

#include <iostream>
#include "Hannah.h"
using namespace std;

int main() {
	Hannah ho(23);
	ho.displayValue();
	
	return 0;
}