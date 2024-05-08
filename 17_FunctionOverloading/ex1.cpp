// Function Overloading in C++
/*
    Defination: Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
    When a function name is overloaded with different jobs it is called function overloading.
*/

#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Float: " << x << endl;
}


int main() {
    int a = 10;
    float b = 12.08;
    printNumber(a);
    printNumber(b);
    return 0;
}
