#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally() {}

Sally::Sally(int n) {
	num = n;
}

Sally Sally::operator+(Sally aso)
{
	Sally brandNew;
	brandNew.num = num + aso.num;
	return(brandNew);
}

Sally Sally::operator-(Sally aso) {
	Sally brandNew;
	brandNew.num = num - aso.num;
	return (brandNew);
}

Sally Sally::operator*(Sally aso) {
	Sally brandNew;
	brandNew.num = num * aso.num;
	return (brandNew);
}

Sally Sally::operator/(Sally aso) {
	Sally brandNew;
	brandNew.num = num / aso.num;
	return (brandNew);
}