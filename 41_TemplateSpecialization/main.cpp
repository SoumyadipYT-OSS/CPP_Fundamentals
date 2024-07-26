// Template Specialization in C++
// It is used to define a different implementation for a template when a specific type is passed as a template parameter.

#include <iostream>
using namespace std;

template <class T>
class example_DataType {
public:
	example_DataType(T x) {
		cout << x << " is not a character!" << endl;
	}
};


template<>
class example_DataType<char> {
public:
	example_DataType(char x) {
		cout << x << " is indeed a character!" << endl;
	}
};


// main method
int main() {
	example_DataType<int> obj1(8);
	example_DataType<double> obj2(3.14);
	example_DataType<char> obj3('q');

	return 0;
}
