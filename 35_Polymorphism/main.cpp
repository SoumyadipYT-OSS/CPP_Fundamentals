// Polymorphism in C++
// Polymorphism is a feature of OOP that allows objects of different classes to be treated as objects of a common superclass.
// Calling the same function on objects of different classes may produce different results due to implementation of these classes.

#include <iostream>
#include <string>

using namespace std;

class Engine {
public:
	virtual void start() = 0;
	virtual ~Engine() {};
};


class GasEngine : public Engine {
public:
	void start() {
		cout << "Starting the gas engine..." << endl;
	};
};


class ElectricEngine : public Engine {
	public:
	void start() {
		cout << "Starting the electric engine..." << endl;
	};
};


int main() {
	Engine* gasEngPtr = new GasEngine();
	Engine* elecEngPtr = new ElectricEngine();

	gasEngPtr->start();
	elecEngPtr->start();

	delete gasEngPtr;
	delete elecEngPtr;

	return 0;
}