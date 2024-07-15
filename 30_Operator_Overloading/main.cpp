#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
	Sally a(34);
	Sally b(21);
	Sally c;
	c = a + b;
	
	Sally d(34);
	Sally e(21);
	Sally f = d - e;

	Sally g(34);
	Sally h(21);
	Sally i = g * h;

	Sally j(34);
	Sally k(21);
	Sally l = j / k;

	cout << "Operator overloading addition:" << endl;
	cout << c.num << endl;
	cout << "Operator overloading subtraction:" << endl;
	cout << f.num << endl;
	cout << "Operator overloading multiplication:" << endl;
	cout << i.num << endl;
	cout << "Operator overloading division:" << endl;
	cout << l.num << endl;
	
	return 0;
}

// Output:
// 55
// Explanation: The operator+ function is overloaded in the Sally class. The operator+ function is called when the + operator is used with two Sally objects. The operator+ function returns a new Sally object with the sum of the num values of the two Sally objects. In the main function, two Sally objects a and b are created with num values 34 and 21 respectively. The operator+ function is called with a and b as arguments, and the result is stored in the Sally object c. The num value of c is then printed, which is 55 (34 + 21).