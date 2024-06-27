#include "Birthday.h"
#include "People.h"
#include <iostream>
using namespace std;

int main() {
	Birthday birthObj(8, 15, 1947);
	People meraBharatObj("Bharat", birthObj);
	meraBharatObj.printInfo();

	return 0;
}