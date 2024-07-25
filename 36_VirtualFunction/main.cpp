// Virtual Function
// It is used to achieve runtime polymorphism.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "Derived Function" << endl;
    }
};


// main method
int main() {
    Derived derived1;
    Base* base1 = &derived1;

    // Calls the member function of the Derived class
    base1->print();

    return 0;
}
