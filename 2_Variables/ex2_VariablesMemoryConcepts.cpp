#include <iostream>

using namespace std;

int main() {
    /*
        In C++, 'int' datatype takes 4 bytes of memory.
    */
    int x = 99;
    cout << "x = " << x << endl;
    x = 100;        // x is now 100
    cout << "x = " << x << endl;


    /*
        In C++, 'float' datatype takes 4 bytes of memory.
    */
    float y = 3.14;
    cout << "y = " << y << endl;
    y = 2.71;       // y is now 2.71
    cout << "y = " << y << endl;


    /*
        In C++, 'char' datatype takes 1 byte of memory.
    */
    char z = 'A';
    cout << "z = " << z << endl;
    z = 'B';        // z is now 'B'
    cout << "z = " << z << endl;
}