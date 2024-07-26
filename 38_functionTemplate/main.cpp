#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

// main method
int main() {
	cout << add(1, 2) << endl;
	cout << add(1.1, 2.2) << endl;

	int asciiValueA = static_cast<int>('a');
	int asciiValueB = static_cast<int>('b');
	cout << add(asciiValueA, asciiValueB) << endl;

	return 0;
}
