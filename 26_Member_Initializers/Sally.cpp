#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally(int a, int b) : regVar(a), constVar(b)
{
}

void Sally::print() {
	cout << "regular var is: " << regVar << " const var is: " << constVar << endl;
}
