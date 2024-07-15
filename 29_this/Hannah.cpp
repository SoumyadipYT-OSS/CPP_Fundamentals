#include "Hannah.h"
#include <iostream>
using namespace std;

Hannah::Hannah(int num)
: h(num){
	//ctor   'ctor' is a common abbreviation for constructor

}

void Hannah::displayValue() {
	cout << "h=" << h << endl;
	cout << "this->h" << this->h << endl;
	cout << "(*this).h=" << (*this).h << endl;
}
