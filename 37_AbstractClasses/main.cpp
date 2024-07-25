// Abstract class in C++
// It is needed when we want to have a class that has a pure virtual function

#include <iostream>
using namespace std;


// Abstract class
class Shape {
public:
	virtual void draw() = 0;	// pure virtual function (no implementation)
	void commonFunction() {
		cout << "This is a common function in shape." << endl;
	}
};

class Circle : public Shape {
public:
	void draw() override {
		cout << "Drawing a circle." << endl;
	}
};

class Rectangle : public Shape {
public:
	void draw() override {
		cout << "Drawing a rectangle." << endl;
	}
};



// main method
int main() {
	Circle c1;
	Rectangle rec1;

	c1.commonFunction();
	rec1.commonFunction();

	c1.draw();
	rec1.draw();

	return 0;
}
