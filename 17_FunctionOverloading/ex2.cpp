// Another example of Function overloading in C++

#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Float: " << x << endl;
}

void printNumber(double x) {
    cout << "Double: " << x << endl;
}

int main() {
    int a = 10;
    float b = 12.08;
    double c = 20.8995638;
    printNumber(a);
    printNumber(b);
    printNumber(c);
    return 0;
}