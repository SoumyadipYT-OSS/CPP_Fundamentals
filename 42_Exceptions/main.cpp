#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int32_t divideException() {
	double numerator, denominator, divide;
	cout << "Enter numerator: ";
	cin >> numerator;
	cout << "Enter denominator: ";
	cin >> denominator;

	try {
		if (denominator == 0)
			throw 0;
		else
			return numerator / denominator;
	} catch (int num_exception) {
		cout << "Error: Cannot divide by " << num_exception << endl;
	}

	return 0;
}


class MyException : public runtime_error {
public:
	MyException(const string& msg) : runtime_error(msg) {}
};

int16_t userInputException() {
	int16_t num;
	cout << "Enter a number: ";
	cin >> num;
	try {
		if (cin.fail())
			throw MyException("Error: Invalid input");

		if (num < 0)
			throw MyException("Error: Negative number");
		else if (num == 0)
			throw MyException("Error: Zero");
		else if (num > 0)
			cout << "Positive number" << num << endl;
		else
			throw MyException("Error: Not a number");
	} catch (MyException& e) {
		cout << e.what() << endl;
	}

	return 0;
}


int32_t standardException() {
	try {
		vector<int> ex = { 1, 2, 3, 4, 5 };
		cout << "Accessing element at index 10: " << ex.at(10) << endl;
	} catch (const out_of_range& e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	return 0;
}



// main method
int main() {
	// divideException();
	// userInputException();
	standardException();

	return 0;
}
