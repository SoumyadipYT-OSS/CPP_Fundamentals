#include <iostream>

using namespace std;

int main() {
    /*
        In C++, 'int' datatype takes 4 bytes of memory.
    */
    cout << "Variable Memory Concepts" << endl;
    cout << "-------------------------" << endl;

    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    int x = 99;
    cout << "x = " << x << endl;
    x = 100;        // x is now 100
    cout << "x = " << x << endl;


    /*
        In C++, 'float' datatype takes 4 bytes of memory.
    */
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    float y = 3.14;
    cout << "y = " << y << endl;
    y = 2.71;       // y is now 2.71
    cout << "y = " << y << endl;


    /*
        In C++, 'char' datatype takes 1 byte of memory.
    */
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    char z = 'A';
    cout << "z = " << z << endl;
    z = 'B';        // z is now 'B'
    cout << "z = " << z << endl;


    /*
        In C++, 'bool' datatype takes 1 byte of memory.
    */
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    bool a = false;
    cout << "a = " << a << endl;
    a = true;      // a is now true
    cout << "a = " << a << endl;


    /*
        In C++, 'double' datatype takes 8 bytes of memory.
    */
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    double b = 3.14159;
    cout << "b = " << b << endl;
    b = 2.71828;      // b is now 2.71828
    cout << "b = " << b << endl;


    /*
        In C++, 'long' datatype takes 4 bytes of memory.
    */
}